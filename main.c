#include <stdio.h>
#include "garfo.h"

//teste

int main() {
    Grafo *g = le_grafo_arquivo("grafo.txt", 0); // 0 = matriz

    if (!g) {
        printf("Erro ao ler grafo\n");
        return 1;
    }
    int dist = distancia(g, 1, 3);

    // Print the result to the terminal
    printf("A distância entre os vértices 1 e 3 é: %d\n", dist);
    componentes_conexas(g, "componentes_saida.txt");

    libera_grafo(g);
    return 0;
}