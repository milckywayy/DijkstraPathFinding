#ifndef READ_MAP_H_
#define READ_MAP_H_

#include <string>
#include <unordered_map>
#include "node.h"

using namespace std;


unordered_map<char, Node*> readMap(string fileName);

#endif