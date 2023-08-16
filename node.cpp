#include <iostream>
#include <limits>
#include "node.h"

using namespace std;


Node::Node(char letter) {
    this->letter = letter;
    this->distance = numeric_limits<int>::max();
    this->visited = false;
    this->prevNodeLetter = '\0';
}

void Node::addConnection(Node *node, int weight) {
    next[weight] = node;
}

char Node::getLetter() {
    return letter;
}

int Node::getDistance() {
    return distance;  
}

bool Node::getVisited() {
    return visited;  
}

unordered_map<int, Node*> Node::getConnectedNodes() {
    return next;
}

char Node::getPrevNodeLetter() {
    return prevNodeLetter;
}

void Node::setDistance(int distance) {
    this->distance = distance;  
}

void Node::setVisited(bool visited) {
    this->visited = visited;  
}

void Node::setPrevNodeLetter(char prevLetter) {
    this->prevNodeLetter = prevLetter;
}

void Node::printNode() {
    cout << "Node " << letter << endl;
    for (pair<int, Node*> n : next) {
        cout << "\t" << n.second->getLetter() << ": " << n.first << endl;
    }
}

Node::~Node() {
}
