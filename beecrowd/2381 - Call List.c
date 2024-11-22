/*
 * nome: 2381 C99.c
 * descrição: Call List
 * data: -
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar(const void *a, const void *b){
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    getchar();

    char *nomes[N];

    for(int i=0; i<N; i++){
        nomes[i] = (char *)malloc(22 * sizeof(char));
        fgets(nomes[i], 22, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    qsort(nomes, N, sizeof(char *), comparar);

    printf("%s\n", nomes[K-1]);

    for(int i=0; i<N; i++) free(nomes[i]);

    return 0;
}

