#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Separa(int p, int r, int v[]){
    int c, k, t;
    c = v[r];
    for(k=p; k<r; k++){
        if(v[k] <= c){
            t = v[p], v[p] = v[k], v[k] = t;
            p++;
        }
    }
    v[r] = v[p];
    v[p] = c;
    return p;
}

void quickSort(int p, int r, int v[]){
    int j;
    if(p < r){
        j = Separa(p, r, v);
        quickSort(p, j-1, v);
        quickSort(j+1, r, v);
        }
}

void gerarRand(int v[], int n){
    for(int i=0; i<n; i++) {
        v[i] = rand()%100000;
    }
}

int main(){
    int n;

    for(n=0; n<=400000; n=n+20000){
        int *v = malloc(n * sizeof(int));

        gerarRand(v, n);

        clock_t start = clock();
        quickSort(0, n-1, v);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(v);
    }
    return 0;
}
