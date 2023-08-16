#ifndef READ_MAP_H_
#define READ_MAP_H_

#include <string>
#include <vector>
#include "node.h"

using namespace std;


bool contains(vector<Node*> nodes, char letter);
Node *getNodeByLetter(vector<Node*> nodes, char letter);
vector<Node*> readMap(string fileName);

#endif