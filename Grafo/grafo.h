#ifndef GRAFO_GRAFO_H
#define GRAFO_GRAFO_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "aresta.h"

typedef struct grafo Grafo;
#define vertex int
Grafo *GRAFOconstroi(int num_v);
bool GRAFOvazio(Grafo *g);
int GRAFO_get_num_aresta(Grafo *g);
int GRAFO_get_num_vertice(Grafo *g);
void GRAFOinsere_aresta(Grafo *g, vertex v, vertex w);
void GRAFOremove_aresta(Grafo *g, vertex v, vertex w);
void GRAFOimprime(Grafo *g);
void GRAFOdestroi(Grafo *g);

#endif //GRAFO_GRAFO_H
