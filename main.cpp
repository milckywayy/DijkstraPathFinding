#include <iostream>
#include "node.h"
#include "read_map.h"

using namespace std;


int main(int argc, char const *argv[])
{
    unordered_map<char, Node*> nodes;

    if (argc < 3) {
        cerr << "Not enough arguments." << endl;
        return 1;
    }

    char startNodeLetter = argv[1][0];
    char endNodeLetter = argv[2][0];

    try { 
        nodes = readMap("map.txt");
    } catch (exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 2;
    }

    if (nodes.find(startNodeLetter) == nodes.end() || nodes.find(endNodeLetter) == nodes.end()) {
        cerr << "Error: Specified start node or end node is not defined on the map." << endl;
        return 3;
    }

    // for (pair<char, Node*> n: nodes) {
    // 	n.second->printNode();
    // }

    for (pair<char, Node*> n: nodes) {
    	delete n.second;
    }
    
    return 0;
}
