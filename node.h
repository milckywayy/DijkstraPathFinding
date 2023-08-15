#ifndef NODE_H_
#define NODE_H_

#include <unordered_map>

using namespace std;


class Node {
private:
    char letter;
    int distance;
    unordered_map<int, Node*> next;

public:
    Node(char letter);
    void addConnection(Node *node, int weight);
    void setDistance(int distance);
    char getLetter();
    int getDistance();
    unordered_map<int, Node*> getConnectedNodes();
    void printNode();
    ~Node();
};

#endif