#include <stdio.h>
#include "garfo.h"

//teste

int main() {
    Grafo *g = le_grafo_arquivo("grafo.txt", 0); // 0 = matriz

    if (!g) {
        printf("Erro ao ler grafo\n");
        return 1;
    }
    int vertice_u = 1;
    int vertice_v = 3;
    
    // Chama a função distancia usando as variáveis
    int dist = distancia(g, vertice_u, vertice_v);

    // Imprime o resultado, usando as variáveis para mostrar de onde a distância foi calculada
    printf("A distancia entre os vertices %d e %d:\n%d\n", vertice_u, vertice_v, dist);
    componentes_conexas(g, "componentes_saida.txt");

    libera_grafo(g);
    return 0;
}