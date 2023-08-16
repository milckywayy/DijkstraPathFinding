#include <queue>
#include <iostream>
#include "dijkstra.h"
#include "read_map.h"


bool ascendingCompare(const void *a, const void *b) {
    return ((Node*)a)->getDistance() > ((Node*)b)->getDistance();
}

vector<Node*> dijkstra(vector<Node*> nodes, char startNodeLetter, char endNodeLetter) {
    priority_queue<Node*, std::vector<Node *>, decltype(&ascendingCompare)> queue(ascendingCompare);
    getNodeByLetter(nodes, startNodeLetter)->setDistance(0);

    for (Node *node: nodes) {
        queue.push(node);
    }

    Node *node;
    while (queue.size() > 0) {
        node = queue.top();
        queue.pop();
        node->setVisited(true);

        for (pair<int, Node*> p : node->getConnectedNodes()) {
            if (!p.second->getVisited() && node->getDistance() + p.first < p.second->getDistance()){
                p.second->setDistance(node->getDistance() + p.first);
                p.second->setPrevNodeLetter(node->getLetter());
            }
        }
    }

    vector<Node*> path;
    node = getNodeByLetter(nodes, endNodeLetter);
    path.insert(path.begin(), node);
    do {
        node = getNodeByLetter(nodes, node->getPrevNodeLetter());
        path.insert(path.begin(), node);
    }
    while (node->getPrevNodeLetter() != '\0');

    return path;
}