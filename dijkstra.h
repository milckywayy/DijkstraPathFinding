#ifndef DIJKSTRA_H_
#define DIJKSTRA_H_

#include <unordered_map>
#include "node.h"

using namespace std;


void dijkstra(unordered_map<char, Node*> nodes, char startNodeLetter, char endNodeLetter);

#endif