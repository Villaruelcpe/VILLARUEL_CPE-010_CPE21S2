#include <iostream>

// structure to store edges
struct graphEdge {
    int start_ver, end_ver, weight;
};

class DiaGraph {
    int N;  // number of vertices

public:
    int **matrix;  // adjacency matrix

    // Constructor
    DiaGraph(graphEdge edges[], int n, int N) {
        this->N = N;

        // create the matrix and set all values to 0
        matrix = new int *[N];
        for (int i = 0; i < N; i++) {
            matrix[i] = new int[N];
            for (int j = 0; j < N; j++)
                matrix[i][j] = 0;
        }

        // add the edges to the matrix
        for (int i = 0; i < n; i++) {
            int start_ver = edges[i].start_ver;
            int end_ver = edges[i].end_ver;
            int weight = edges[i].weight;

            matrix[start_ver][end_ver] = weight;
        }
    }

    // Destructor
    ~DiaGraph() {
        for (int i = 0; i < N; i++)
            delete[] matrix[i];
        delete[] matrix;
    }
};

// print the adjacency matrix
void display_Matrix(DiaGraph &graph, int N) {
    std::cout << "  ";
    for (int i = 0; i < N; i++)
        std::cout << char('A' + i) << " ";
    std::cout << std::endl;

    for (int i = 0; i < N; i++) {
        std::cout << char('A' + i) << " ";
        for (int j = 0; j < N; j++)
            std::cout << graph.matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

int main() {
    // graph edges array: {from, to, weight}  (A=0, B=1, C=2, D=3, E=4)
    graphEdge edges[] = {
        {0, 1, 2}, {0, 2, 4}, {1, 4, 3}, {2, 3, 2}, {3, 1, 4}, {4, 3, 3}
    };

    int N = 5;  // number of vertices
    int n = sizeof(edges) / sizeof(edges[0]);  // number of edges

    // create the graph
    DiaGraph diagraph(edges, n, N);

    // print the adjacency matrix
    std::cout << "Graph adjacency matrix:" << std::endl;
    display_Matrix(diagraph, N);

    return 0;
}