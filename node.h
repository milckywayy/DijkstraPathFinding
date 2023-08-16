#ifndef NODE_H_
#define NODE_H_

#include <unordered_map>

using namespace std;


class Node {
private:
    char letter;
    unordered_map<int, Node*> next;
    int distance;
    bool visited;
    char prevNodeLetter;

public:
    Node(char letter);
    void addConnection(Node *node, int weight);
    char getLetter();
    int getDistance();
    bool getVisited();
    char getPrevNodeLetter();
    unordered_map<int, Node*> getConnectedNodes();
    void setDistance(int distance);
    void setVisited(bool visited);
    void setPrevNodeLetter(char prevLetter);
    void printNode();
    ~Node();
};

#endif