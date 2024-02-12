#include <iostream>
using namespace std;


int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    int incidence[50][50] = {0};   // 50, 50 represents number of vertices and edges respectively 
    cout << "Enter the vertices associated with each edge (vertex 1, vertex 2) and the frequency of each edge:\n";
    for (int i = 0; i < edges; i++) {
        int vertex1, vertex2, freqeuncy;
        cout << "Enter vertex number 1 of edge No. " << i+1 << ": "; cin >> vertex1;
        cout << "Enter vertex number 2 of edge No. " << i+1 << ": "; cin >> vertex2;
        cout << "Enter the frequency of edge No. " << i+1 << ": "; cin >> freqeuncy;
        incidence[vertex1 - 1][i] = freqeuncy;
        incidence[vertex2 - 1][i] = freqeuncy;
    }

    cout << "\nThe incidence matrix is:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < edges; j++) {
            cout << incidence[i][j] << " ";
        }
        cout << endl;
    }
}