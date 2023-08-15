#ifndef NODE_H_
#define NODE_H_

#include <map>

using namespace std;


class Node {
private:
    char letter;
    map<int, Node*> next;

public:
    Node(char letter);
    void addConnection(Node *node, int weight);
    char getLetter();
    Node* getNext();
    void printNode();
    ~Node();
};

#endif