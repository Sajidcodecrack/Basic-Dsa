#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int value;
    vector<Node*> neighbors;

    Node(int val) : value(val) {}
};

void addEdge(Node* u, Node* v) {
    u->neighbors.push_back(v);
}

bool hasDirectEdge(Node* from, Node* to) {
    for (Node* neighbor : from->neighbors) {
        if (neighbor == to) {
            return true;
        }
    }
    return false;
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = new Node(7);
    Node* node8 = new Node(8);

    Node* nodes[] = {nullptr, node1, node2, node3, node4, node5, node6, node7, node8};

    addEdge(node7, node8);
    addEdge(node2, node1);
    addEdge(node6, node2);
    addEdge(node2, node7);
    addEdge(node6, node7);
    addEdge(node3, node6);
    addEdge(node6, node4);
    addEdge(node4, node5);
    addEdge(node7, node5);

    int inDegree[9] = {0}; // Initialize in-degree array

    // Calculate in-degree for each node
    for (int i = 1; i <= 8; ++i) {
        Node* current = nodes[i];
        for (Node* neighbor : current->neighbors) {
            ++inDegree[neighbor->value];
        }
    }

    // Print in-degree of each node
    cout << "In-degree of each node:" << endl;
    for (int i = 1; i <= 8; ++i) {
        cout << "Node " << i << ": " << inDegree[i] << endl;
    }

    // Test whether there is a direct edge between nodes 2 and 7
    if (hasDirectEdge(node2, node7)) {
        cout << "There is a direct edge between nodes 2 and 7." << endl;
    } else {
        cout << "There is no direct edge between nodes 2 and 7." << endl;
    }

    // Test whether there is a direct edge between nodes 4 and 3
    if (hasDirectEdge(node4, node3)) {
        cout << "There is a direct edge between nodes 4 and 3." << endl;
    } else {
        cout << "There is no direct edge between nodes 4 and 3." << endl;
    }

    // Clean up memory
    for (int i = 1; i <= 8; ++i) {
        delete nodes[i];
    }

    return 0;
}
