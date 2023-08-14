#ifndef NODE_H_
#define NODE_H_

#include <vector>

using namespace std;


class Node {
private:
    double weight;
    vector<Node> next;

public:
    Node(double weight);
    void addConnection(Node node);
    double getWeight();
    Node *getNext(unsigned int index);
    void printNode();
};

#endif