/*
 * nome: 2460 C99.c
 * descrição: Fila
 * data: 17/11
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *d, N, i=0;
    int *f, M, j=0;

    scanf("%d", &N);
    d = malloc(N * sizeof(int));
    while(i<N) scanf("%d", &d[i++]);

    scanf("%d", &M);
    f = malloc(M * sizeof(int));
    while(j<M) scanf("%d", &f[j++]);

    int *saiu = malloc(1000000 * sizeof(int));
    for(i=0; i<=1000000; i++) saiu[i] = 0;
    for(j=0; j<M; j++) saiu[f[j]] = 1;

    int first = 1;
    for(i=0; i<N; i++) {
        if(!saiu[d[i]]) {
            if(!first) printf(" ");
            printf("%d", d[i]);
            first = 0;
        }
    }

    printf("\n");
    free(d);
    free(f);
    free(saiu);

    return 0;
}
