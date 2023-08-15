#include <iostream>
#include "node.h"

using namespace std;


Node::Node(char letter) {
    this->letter = letter;
}

void Node::addConnection(Node *node, int weight) {
    next[weight] = node;
}

char Node::getLetter() {
    return letter;
}

Node* Node::getNext() {
    map<int, Node*>::iterator it = next.begin();
    return it->second;
}

void Node::printNode() {
    cout << "Node " << letter << endl;
    for (pair<int, Node*> n : next) {
        cout << n.second->getLetter() << ": " << n.first << endl;
    }
}

Node::~Node() {
}
