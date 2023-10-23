#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numVertices = 6;
    vector<vector<int>> adjacencyMatrix(numVertices, vector<int>(numVertices, 0));

    // Edges: (1,3)(1,5)(3,5)(3,4),(3,6),(3,2),(2,6),(4,6),(5,6)
    adjacencyMatrix[0][2] = 1; // (1,3)
    adjacencyMatrix[0][4] = 1; // (1,5)
    adjacencyMatrix[2][4] = 1; // (3,5)
    adjacencyMatrix[2][3] = 1; // (3,4)
    adjacencyMatrix[2][5] = 1; // (3,6)
    adjacencyMatrix[2][1] = 1; // (3,2)
    adjacencyMatrix[1][5] = 1; // (2,6)
    adjacencyMatrix[3][5] = 1; // (4,6)
    adjacencyMatrix[4][5] = 1; // (5,6)

    // Displaying the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
