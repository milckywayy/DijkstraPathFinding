#include <queue>
#include "dijkstra.h"
#include "read_map.h"


bool ascendingCompare(const void *a, const void *b) {
    return ((Node*)a)->getDistance() > ((Node*)b)->getDistance();
}

vector<Node*> dijkstra(vector<Node*> nodes, char startNodeLetter, char endNodeLetter) {
    priority_queue<Node*, std::vector<Node *>, decltype(&ascendingCompare)> queue(ascendingCompare);
    Node *node = getNodeByLetter(nodes, startNodeLetter);
    node->setDistance(0);
    queue.push(node);

    while (queue.size() > 0) {
        node = queue.top();
        queue.pop();
        node->setVisited(true);

        for (pair<Node*, int> p : node->getConnectedNodes()) {
            if (!p.first->getVisited() && node->getDistance() + p.second < p.first->getDistance()){
                p.first->setDistance(node->getDistance() + p.second);
                p.first->setPrevNodeLetter(node->getLetter());
                queue.push(p.first);
            }
        }
    }

    vector<Node*> path;
    node = getNodeByLetter(nodes, endNodeLetter);
    path.insert(path.begin(), node);
    while (node->getPrevNodeLetter() != '\0') {
        node = getNodeByLetter(nodes, node->getPrevNodeLetter());
        path.insert(path.begin(), node);
    }

    return path;
}