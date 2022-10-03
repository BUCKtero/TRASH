#include <stdio.h>
#include "grafo.h"

int main() {
    printf("Hello, World!\n");
    Grafo *g;
    Aresta i;
 GRAFOvazio(g);
 GRAFO_get_num_aresta(g);
 GRAFO_get_num_vertice(g);
 GRAFOinsere_aresta(g, i);
GRAFOremove_aresta(g, i);
    GRAFOimprime(g);
    GRAFOdestroi(g);
    return 0;
}
