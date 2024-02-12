#include <iostream>
using namespace std;

int main() {
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    int adj[100][100];
    cout << "Enter the adjacency matrix:" << endl;  
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cin >> adj[i][j];
        }
    }

    cout << "\n\nThe edges in the graph are:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = i; j < vertices; j++) {
            if (adj[i][j] > 0) {
                cout << "Edge (" << i+1 << ", " << j+1
                << ") appears " << adj[i][j] << " times" << endl;
            }
        }
    }
}
