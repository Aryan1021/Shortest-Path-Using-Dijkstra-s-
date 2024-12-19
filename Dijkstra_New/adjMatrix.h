// adjMatrix.h
#ifndef ADJMATRIX_H
#define ADJMATRIX_H

#include <stdio.h>

#define MAX_NODES 21
#define INF 9999999 // Infinity value for unconnected nodes

// Graph structure using adjacency matrix
typedef struct {
    int num_nodes;
    int adjacency_matrix[MAX_NODES][MAX_NODES];
} Graph;

// Function to initialize the graph with given number of nodes
void initializeGraph(Graph *graph, int num_nodes);

// Function to add an edge between two nodes with given weight
void addEdge(Graph *graph, int source, int destination, float weight);

// Function to print the adjacency matrix
void printGraph(Graph *graph);

void initializeGraph(Graph *graph, int num_nodes);

void addEdgesToGraph(Graph *graph);

#endif // ADJMATRIX_H