/*
 * nome: 1152 C99.c
 * descrição: Ruas Escuras
 * data: 29/01
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 200000

typedef struct {
    int u, v, w;
} Edge;

int parent[MAX], rank[MAX];

int find(int x){
    if(parent[x] != x){
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void unionSets(int x, int y){
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY){
        if(rank[rootX] > rank[rootY]) parent[rootY] = rootX;
        else if(rank[rootX] < rank[rootY]) parent[rootX] = rootY;
        else{
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int compare(const void *a, const void *b){
    return ((Edge*)a)->w - ((Edge*)b)->w;
}

int main(){
    int m, n;

    while(scanf("%d%d", &m, &n) && (m!=0 || n!=0)){
        Edge edges[n];
        int totalCost = 0, mstCost = 0;

        // Conjuntos
        for(int i=0; i<m; i++){
            parent[i] = i;
            rank[i] = 0;
        }

        // Leitura das arestas
        for(int i=0; i<n; i++){
            scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);
            totalCost += edges[i].w;
        }

        // Ordenar as arestas pela sua largura
        qsort(edges, n, sizeof(Edge), compare);

        // Construir a MST usando o algoritmo de Kruskal
        for(int i=0; i<n; i++){
            int u = edges[i].u;
            int v = edges[i].v;
            int w = edges[i].w;

            if(find(u) != find(v)){
                unionSets(u, v);
                mstCost += w;
            }
        }

        // A economia é a diferença entre o custo total e o custo da MST
        printf("%d\n", totalCost - mstCost);
    }

    return 0;
}
