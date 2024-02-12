#include <iostream>
using namespace std;

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    int adj[100][100] = {0};
    cout << "Enter the vertices associated with each edge (vertex 1, vertex 2):" << endl;
    for (int i = 0; i < edges; i++) {
        int soureVertex, destinatedVertex;
        cout << "Enter source vertex of edge No. " << i+1 << ": "; cin >> soureVertex;
        cout << "Enter destination vertex of edge No. " << i+1 << ": "; cin >> destinatedVertex;
        adj[soureVertex - 1][destinatedVertex - 1]++;
    }

    cout << "The adjacency matrix is:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
