#include <iostream>

#include "node.h"

using namespace std;


int main(int argc, char const *argv[])
{
    cout << "Hello world!" << endl << endl;
    
    Node* n = new Node('A');
    n->addConnection(new Node('B'), 2);
    n->addConnection(new Node('C'), 3);
    n->addConnection(new Node('D'), 1);
    n->printNode();

    delete n;
    
    return 0;
}
