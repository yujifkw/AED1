#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Intercala (int p, int q, int r, int v[]){
    int i, j, k, *w;
     w = malloc((r-p) * sizeof(int));

    i = p; j = q; k = 0;
    while(i<q && j<r){
        if(v[i] <= v[j]) w[k++] = v[i++];
        else w[k++] = v[j++];
    }

    while(i < q) w[k++] = v[i++];
    while(j < r) w[k++] = v[j++];

    for(i=p; i<r; i++) v[i] = w[i-p];
    free (w);
}

void mergeSort (int p, int r, int v[]){
    if(p < r-1) {
    int q = (p+r)/2;
    mergeSort(p, q, v);
    mergeSort(q, r, v);
    Intercala(p, q, r, v);
    }
}


void gerarRand(int v[], int n){
    for(int i=0; i<n; i++){
        v[i] = rand()%100000;
    }
}

int main(){
    int n;

    for(n=0; n<=400000; n=n+20000){
        int *v = malloc(n * sizeof(int));

        gerarRand(v, n);

        clock_t start = clock();
        mergeSort(0, n, v);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(v);
    }
    return 0;
}
