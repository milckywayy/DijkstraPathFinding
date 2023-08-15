#include <queue>
#include "dijkstra.h"


void dijkstra(unordered_map<char, Node*> nodes, char startNodeLetter, char endNodeLetter) {
    
    Node *node = nodes[startNodeLetter];
    node->setDistance(0);


}