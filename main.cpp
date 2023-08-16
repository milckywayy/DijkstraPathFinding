#include <iostream>
#include "node.h"
#include "read_map.h"
#include "dijkstra.h"

using namespace std;


int main(int argc, char const *argv[])
{
    vector<Node*> nodes;

    if (argc < 4) {
        cerr << "Not enough arguments." << endl;
        return 1;
    }

    const char *fileName = argv[1];
    char startNodeLetter = argv[2][0];
    char endNodeLetter = argv[3][0];

    try { 
        nodes = readMap(fileName);
    } catch (exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 2;
    }

    if (!contains(nodes, startNodeLetter) || !contains(nodes, endNodeLetter)) {
        cerr << "Error: Specified start node or end node is not defined on the map." << endl;
    	
	for (Node *node : nodes) {
    		delete node;
    	}

        return 3;
    }

    vector<Node*> path;
    path = dijkstra(nodes, startNodeLetter, endNodeLetter);

    cout << "Path found: ";
    for (Node *node : path) {
        cout << node->getLetter() << " ";
    }

    for (Node *node : nodes) {
    	delete node;
    }
    
    return 0;
}
