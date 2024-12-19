    #include "adjMatrix.h"

    // Function to initialize the graph with given number of nodes
    void initializeGraph(Graph *graph, int num_nodes) {
        graph->num_nodes = num_nodes;
        // Initialize adjacency matrix with infinity values
        for (int i = 0; i < num_nodes; i++) {
            for (int j = 0; j < num_nodes; j++) {
                graph->adjacency_matrix[i][j] = INF;
            }
            // Set diagonal to 0
            graph->adjacency_matrix[i][i] = 0;
        }
        addEdgesToGraph(graph);
    }

    // Function to add an edge between two nodes with given weight
    void addEdge(Graph *graph, int source, int destination, float weight) {
        graph->adjacency_matrix[source][destination] = weight;
        graph->adjacency_matrix[destination][source] = weight; // Bidirectional edge
    }

    void addEdgesToGraph(Graph *graph) {
        // Add edges to the graph here
    addEdge(graph, 0, 1, 2);
    addEdge(graph, 0, 3, 3.2);
    addEdge(graph, 0, 5, 2.9);
    addEdge(graph, 0, 6, 2.2);
    addEdge(graph, 1, 7, 3.2);
    addEdge(graph, 1, 2, 2.4);
    addEdge(graph, 1, 4, 4.6);
    addEdge(graph, 1, 8, 3);
    addEdge(graph, 2, 0, 4.2);
    addEdge(graph, 2, 9, 2);
    addEdge(graph, 2, 10, 6.5);
    addEdge(graph, 2, 11, 2.4);
    addEdge(graph, 3, 12, 2.8);
    addEdge(graph, 3, 13, 1.9);
    addEdge(graph, 3, 14, 6.1);
    addEdge(graph, 3, 15, 3.2);
    addEdge(graph, 4, 16, 2.1);
    addEdge(graph, 4, 17, 17);
    addEdge(graph, 4, 18, 2.6);
    addEdge(graph, 4, 19, 21);
    addEdge(graph, 5, 20, 2.7);
    addEdge(graph, 5, 1, 1.4);
    addEdge(graph, 5, 2, 1.2);
    addEdge(graph, 5, 3, 1.3);
    addEdge(graph, 6, 4, 4.2);
    addEdge(graph, 6, 5, 0.9);
    addEdge(graph, 6, 7, 2.9);
    addEdge(graph, 6, 8, 3.3);
    addEdge(graph, 7, 9, 3);
    addEdge(graph, 7, 10, 7.1);
    addEdge(graph, 7, 11, 3.1);
    addEdge(graph, 7, 12, 3.9);
    addEdge(graph, 8, 13, 3.3);
    addEdge(graph, 8, 14, 1.5);
    addEdge(graph, 8, 15, 2.7);
    addEdge(graph, 8, 16, 3.9);
    addEdge(graph, 9, 17, 9.5);
    addEdge(graph, 9, 18, 3.8);
    addEdge(graph, 9, 19, 4.8);
    addEdge(graph, 9, 20, 3.7);
    addEdge(graph, 10, 0, 3.8);
    addEdge(graph, 10, 1, 4.4);
    addEdge(graph, 11, 3, 1.8);
    addEdge(graph, 11, 4, 4.5);
    addEdge(graph, 12, 5, 2);
    addEdge(graph, 12, 6, 1.7);
    addEdge(graph, 13, 7, 3.4);
    addEdge(graph, 13, 9, 2.4);
    addEdge(graph, 14, 2, 2.7);
    addEdge(graph, 14, 10, 8.3);
    addEdge(graph, 15, 11, 1.7);
    addEdge(graph, 15, 12, 1.2);
    addEdge(graph, 16, 13, 3.2);
    addEdge(graph, 16, 14, 5);
    addEdge(graph, 17, 8, 11);
    addEdge(graph, 17, 15, 8.2);
    addEdge(graph, 18, 16, 0.9);
    addEdge(graph, 18, 17, 8.4);
    addEdge(graph, 19, 18, 7.1);
    addEdge(graph, 19, 20, 8);
    addEdge(graph, 20, 0, 5.7);
    addEdge(graph, 20, 1, 4);
    }

    // Function to print the adjacency matrix
    void printGraph(Graph *graph) {
        printf("Adjacency Matrix:\n");
        for (int i = 0; i < graph->num_nodes; i++) {
            for (int j = 0; j < graph->num_nodes; j++) {
                if (graph->adjacency_matrix[i][j] == INF) {
                    printf("INF\t");
                } else {
                    printf("%d\t", graph->adjacency_matrix[i][j]);
                }
            }
            printf("\n");
        }
    }