#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int vet[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for(int i=0; i<n1; i++)
        L[i] = vet[l+i];
    for(int j=0; j<n2; j++)
        R[j] = vet[m+1+j];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            vet[k] = L[i];
            i++;
        }
        else{
            vet[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        vet[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        vet[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int vet[], int i, int j){
    if(i<j){
        int m = i+(j-i)/2;
        mergeSort(vet, i, m);
        mergeSort(vet, m+1, j);
        merge(vet, i, m, j);
    }
}

void gerarRand(int vet[], int n){
    for(int i=0; i<n; i++){
        vet[i] = rand()%100000;
    }
}

int main(){
    int n;

    for(n=0; n<=400000; n=n+20000){
        int *vet = malloc(n * sizeof(int));

        gerarRand(vet, n);

        clock_t start = clock();
        mergeSort(vet, 0, n-1);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(vet);
    }
    return 0;
}
