#include <iostream>
#include "node.h"
#include "read_map.h"

using namespace std;


int main(int argc, char const *argv[])
{
    readMap("map.txt");
    
    // Node* n = new Node('A');
    // n->addConnection(new Node('B'), 2);
    // n->addConnection(new Node('C'), 3);
    // n->addConnection(new Node('D'), 1);
    // n->printNode();

    // Node *next = n->getNext();
    // next->addConnection(new Node('A'), 2);
    // next->printNode();

    // delete n;
    
    return 0;
}
