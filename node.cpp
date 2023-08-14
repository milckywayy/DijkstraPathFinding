#include "iostream"

#include "node.h"

using namespace std;


Node::Node(double weight) {
    this->weight = weight;
}

void Node::addConnection(Node node) {
    next.push_back(node);
}

double Node::getWeight() {
    return weight;
}

Node *Node::getNext(unsigned int index) {
    if (index < next.size()) {
        return &(next[index]);
    }
    else {
        throw out_of_range("Index out of range.");
    }
}

void Node::printNode() {
    cout << "Weight: " << weight << endl;
    for (int i = 0; i < next.size(); i++) {
        cout << "Node " << i << " " << next[i].getWeight() << endl;
    }
}