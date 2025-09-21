#include <stdio.h>
#include "garfo.h"

int main() {
    Grafo *g = le_grafo_arquivo("grafo.txt", 0); // 0 = matriz

    if (!g) {
        printf("Erro ao ler grafo\n");
        return 1;
    }

    bfs(g, 1, "bfs_saida.txt"); // BFS a partir do vértice 1
    dfs(g, 1, "dfs_saida.txt"); // DFS a partir do vértice 1
    int d12 = distancia(g, 1, 2);
    int d13 = distancia(g, 1, 3);
    printf("Distancia(1,2) = %d\n", d12);
    printf("Distancia(1,3) = %d\n", d13);
    componentes_conexas(g, "componentes_saida.txt");
    salva_informacoes("informacoes_grau.txt", g);



    libera_grafo(g);
    return 0;
}