#include <iostream>
#include "node.h"
#include "read_map.h"
#include "dijkstra.h"

using namespace std;


int main(int argc, char const *argv[])
{
    vector<Node*> nodes;

    if (argc < 3) {
        cerr << "Not enough arguments." << endl;
        return 1;
    }

    char startNodeLetter = argv[1][0];
    char endNodeLetter = argv[2][0];

    try { 
        nodes = readMap("map2.txt");
    } catch (exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 2;
    }

    if (!contains(nodes, startNodeLetter) || !contains(nodes, endNodeLetter)) {
        cerr << "Error: Specified start node or end node is not defined on the map." << endl;
        return 3;
    }

    dijkstra(nodes, startNodeLetter, endNodeLetter);

    for (Node *node : nodes) {
    	delete node;
    }
    
    return 0;
}
