#ifndef Graph_H
#define Graph_H


#include <stdio.h>
#include<stdbool.h>

typedef struct GraphRep *Graph;

typedef int Vertex;

typedef struct Edge{
Vertex v;
Vertex w;
}Edge;

Graph creategraph(int n);
bool Graphisempty(Graph g);
bool validEdge(Graph g,Edge e);
void insertEdge(Graph g, Edge e);
void deleteEdge(Graph g, Edge e);
void freeGraph(Graph g);
void showGraph(Graph g);
bool adjacent(Graph g, Vertex v, Vertex w);


#endif 
