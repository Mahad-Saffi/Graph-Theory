#include <iostream>
using namespace std;

bool isBipartite(int adjacencyMatrix[100][100], int vertex, int vertexColors[100]);

int main() {

    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;


    int adjacencyMatrix[100][100] = {0};
    cout << "Enter the vertices associated with each edge (vertex 1, vertex 2):" << endl;
    for (int i = 0; i < edges; i++) {
        int vertex1, vertex2;
        cout << "Enter vertex number 1 of edge No. " << i+1 << ": ";
        cin >> vertex1;
        cout << "Enter vertex number 2 of edge No. " << i+1 << ": ";
        cin >> vertex2;

        adjacencyMatrix[vertex1 - 1][vertex2 - 1] = 1;
        adjacencyMatrix[vertex2 - 1][vertex1 - 1] = 1;
    }

    int vertexColors[100];
    for (int i = 0; i < vertices; i++) 
    {
        vertexColors[i] = -1;
    }


    if (isBipartite(adjacencyMatrix, vertices, vertexColors)) {
    cout << "Graph: BIPARTITE" << endl;
    }
    else {
    cout << "Graph: Not a Bipartite" << endl;
    }

}


bool isBipartite(int adjacencyMatrix[100][100], int vertices, int vertexColors[100])
{
    vertexColors[0] = 1;
    int queue[100], queueStart = 0, queueEnd = 1; queue[0] = 0;

    while (queueStart != queueEnd) {    // Queue is used for Breath-First-Search
        int thisVertex = queue[queueStart++];
        for (int i = 0; i < vertices; i++) {
            if (adjacencyMatrix[thisVertex][i]) {
                if (vertexColors[i] == -1) {
                    vertexColors[i] = 1 - vertexColors[thisVertex];
                    queue[queueEnd++] = i;
                }
                else if (vertexColors[i] == vertexColors[thisVertex]) {
                    return false;
                }
            }
        }
    }
    return true;
}

