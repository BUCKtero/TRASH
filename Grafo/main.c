#include <stdio.h>
#include "grafo.h"

int main() {
    Grafo *g;
    g = GRAFOconstroi(7);
    printf("%d\n", GRAFOvazio(g));
    printf("%d\n", GRAFO_get_num_aresta(g));
    printf("%d\n", GRAFO_get_num_vertice(g));
    GRAFOinsere_aresta(g,1,2);
    printf("%d\n", GRAFO_get_num_aresta(g));
    GRAFOimprime(g);
    GRAFOdestroi(g);
    return 0;
}
