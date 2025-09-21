#include <stdio.h>
#include "garfo.h"

//teste

int main() {
    Grafo *g = le_grafo_arquivo("grafo.txt", 0); // 0 = matriz

    if (!g) {
        printf("Erro ao ler grafo\n");
        return 1;
    }

    printf("Grafo lido!\n");
    printf("Vertices: %d\n", g->n);
    printf("Arestas: %d\n", g->m);
    printf("Representacao: %s\n", (g->representacao == 0) ? "Matriz" : "Lista");
    bfs(g, 1, "bfs_saida.txt"); // BFS a partir do vértice 1
    dfs(g, 1, "dfs_saida.txt"); // DFS a partir do vértice 1
    int d12 = distancia(g, 1, 2);
    int d13 = distancia(g, 1, 3);
    printf("Distancia(1,2) = %d\n", d12);
    printf("Distancia(1,3) = %d\n", d13);


    libera_grafo(g);
    return 0;
}