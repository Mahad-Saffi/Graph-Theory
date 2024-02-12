#include <iostream>
using namespace std;

int main() {
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    // Initialize an array to store the degree of each vertex and set its values to zero
    int degree[vertices] = {0};

    // Read the edges and update the degree of the vertices
    cout << "Enter the vertices associated with each edge (vertex 1, vertex 2):" << endl;
    for (int i = 0; i < edges; i++)
    {
        int vertex_1, vertex_2;
        cout << "Enter vertex number 1 of edge No. " << i+1 << ": "; cin >> vertex_1;
        cout << "Enter vertex number 2 of edge No. " << i+1 << ": "; cin >> vertex_2;
        degree[vertex_1 - 1]++;
        degree[vertex_2 - 1]++;
    }

    for (int i = 0; i < vertices; i++) {
        cout << "The degree of vertex " << i + 1 << " is " << degree[i] << endl;
    }

}