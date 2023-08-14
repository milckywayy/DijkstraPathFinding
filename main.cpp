#include <iostream>

#include "node.h"

using namespace std;


int main(int argc, char const *argv[])
{
    cout << "Hello world!" << endl << endl;
    
    Node n(3.14);
    n.addConnection(Node(2.72));
    n.addConnection(Node(21.37));
    n.printNode();
    cout << endl;

    Node *next = n.getNext(0);
    next->printNode();
    cout << endl;

    try {
        Node *next2 = n.getNext(5);
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
    
    
    return 0;
}
