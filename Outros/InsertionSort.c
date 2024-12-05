#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int vet[], int n) {
    for (int i = 1; i < n; i++) {
        int key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }
}

void gerarRand(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        vet[i] = rand() % 100000;
    }
}

int main() {
    int n;

    for(n=0; n<=400000; n=n+20000){
        int* vet = malloc(n * sizeof(int));

        gerarRand(vet, n);

        clock_t start = clock();
        insertionSort(vet, n);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(vet);
    }

    return 0;
}
