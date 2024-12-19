#include <stdio.h>
#include "adjMatrix.h"
#include "adjMatrix.c"
#include "dijkstra.h" 
#include "dijkstra.c" 

#define V 21
#define MAX_NODES 21

#define MENU_DISPLAY_GRAPH 1
#define MENU_FIND_SHORTEST_PATH 2
#define MENU_EXIT 3

// Function to display the menu options
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Display Graph Nodes\n");
    printf("2. Find shortest path between nodes\n");
    printf("3. Exit\n");
}

// Function to display the number of nodes and edges in the graph
void displayNodeEdgeInfo(Graph *graph) {
    printf("\nNumber of nodes: %d\n", graph->num_nodes);
    // Assuming number of edges is the sum of non-INF values in the adjacency matrix
    int num_edges = 0;
    for (int i = 0; i < graph->num_nodes; i++) {
        for (int j = 0; j < graph->num_nodes; j++) {
            if (graph->adjacency_matrix[i][j] != INF) {
                num_edges++;
            }
        }
    }
    printf("Number of edges: %d\n", num_edges);
}

// Function to display nodes with serial number and place name
void displayNodes() {
    // Assuming you have an array of place names corresponding to node indices
    char *places[] = {"Kadirabad", 
    "Kathalbari", 
    "Donar", 
    "Rahamganj",
    "Laheriasarai Tower Chowk",
    "Naka-05",
    "Mirzapur",
    "Allalpatti",
    "Kabirchak",
    "Darbhanga Railway Station",
    "Darbhanga Bus Stand",
    "Darbhanga Tower",
    "Raj Maidan Darbhanga",
    "Hasan Chowk",
    "Mathurapur",
    "M.L.S.M. College",
    "DMCH Medical College Hospital",
    "Darbhanga College of Engineering",
    "Azamnagar",
    "Delhi More",
    "Benta Chowk"
    };

    printf("\nNodes:\n");
    for (int i = 0; i < V; i++) {
        printf("%d - %s\n", i, places[i]);
    }
}

// Function to handle user input for menu selection
int getMenuChoice() {
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

// Function to handle user input for source and destination nodes
void getSourceDestNodes(int *source, int *destination) {
    printf("\nEnter the serial number of source node: ");
    scanf("%d", source);
    printf("Enter the serial number of destination node: ");
    scanf("%d", destination);
}

int main() {
    Graph graph;
    // Initializing the graph here
    initializeGraph(&graph, V);
    int dist[MAX_NODES];
    int temp_graph[MAX_NODES][MAX_NODES];

    int choice, source, destination;
    while (1) {
        displayMenu();
        choice = getMenuChoice();
        switch (choice) {
            case MENU_DISPLAY_GRAPH:
                displayNodes();
                break;
            case MENU_FIND_SHORTEST_PATH:
                getSourceDestNodes(&source, &destination);

                    for (int i = 0; i < graph.num_nodes; i++) {
                        for (int j = 0; j < graph.num_nodes; j++) {
                            temp_graph[i][j] = graph.adjacency_matrix[i][j];
                        }
                    }

                // Call Dijkstra's algorithm with temporary array and source, destination
                dijkstra(temp_graph, source, destination);
                break;
            case MENU_EXIT:
                printf("\nExiting...\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}