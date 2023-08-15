#include <iostream>
#include <fstream>
#include <unordered_map>
#include "read_map.h"
#include "node.h"

#define NODE_LINE_CHARS 1
#define EDGE_LINE_CHARS 5
#define LETTER_CHAR_INDEX 0
#define SOURCE_CHAR_INDEX 0
#define TARGET_CHAR_INDEX 2
#define WEIGHT_CHAR_INDEX 4


Node* readMap(string fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        throw runtime_error("Couldn't read " +  fileName + '\n');
    }

    unordered_map<char, Node*> nodes;
    string line;
    char source;
    char target;
    char weight;

    getline(file, line);
    if (line == "Nodes:") {
        while (getline(file, line) && line != "Edges:") {
            if (line.size() >= NODE_LINE_CHARS) {
                nodes[line[LETTER_CHAR_INDEX]] = new Node(line[LETTER_CHAR_INDEX]);
            }
            else {
                throw runtime_error("File " + fileName + " has invalid format.");
            }
        }
    }
    while (getline(file, line)) {
        if (line.size() >= EDGE_LINE_CHARS) {
            source = line[SOURCE_CHAR_INDEX];
            target = line[TARGET_CHAR_INDEX];
            weight = line[WEIGHT_CHAR_INDEX] - '0';

            nodes[source]->addConnection(nodes[target], weight);
        }
        else {
            throw runtime_error("File " + fileName + " has invalid format.");
        }
    }

    for (pair<char, Node*> n: nodes) {
        n.second->printNode();
        cout << endl;
    }

    for (pair<char, Node*> n: nodes) {
    	delete n.second;
    }
    // delete nodes['A'];

    file.close();

}
