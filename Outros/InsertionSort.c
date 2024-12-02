#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int vet[], int n){
    for(int i=1; i<n; i++){
        int temp = vet[i];
        int j = i-1;

        while(j >= 0 && vet[j] > temp){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = temp;
    }
}

void gerarRandom(int vet[], int n){
    for(int i=0; i<n; i++){
        vet[i] = rand()%100000;
    }
}

int main(){
    int n;
    printf("Tamanho do Vetor (n): ");
    scanf("%d", &n);

    int *vet = malloc(n * sizeof(int));

    gerarRandom(vet, n);

    clock_t start = clock();
    insertionSort(vet, n);
    clock_t end = clock();

    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo: %.3f segundos\n", elapsed_time);

    free(vet);
    return 0;
}
