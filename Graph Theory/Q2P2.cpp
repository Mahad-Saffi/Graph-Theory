#include <iostream>
using namespace std;

int main() {
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    //Initialize arrays to store the in-degree and out-degree of each vertex
    int inDegree[vertices] = {0};
    int outDegree[vertices] = {0};


    cout << "Enter the vertices associated with each edge (Vertex 1, vertex 2):" << endl;
    for (int i = 0; i < edges; i++)
    {
        int sourceVertex, destinatedVertex;
        cout << "Enter source vertex of edge No. " << i+1 << ": "; cin >> sourceVertex;
        cout << "Enter destination vertex of edge No. " << i+1 << ": "; cin >> destinatedVertex;
        outDegree[sourceVertex - 1]++;
        inDegree[destinatedVertex - 1]++;
    }

    for (int i = 0; i < vertices; i++) {
        cout << "The in-degree of vertex " << i + 1 << " is " << inDegree[i] << endl;
        cout << "The out-degree of vertex " << i + 1 << " is " << outDegree[i] << endl;
    }
}
