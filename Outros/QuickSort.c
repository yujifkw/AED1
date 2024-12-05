#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int part(int arr[], int low, int high){
    int pivo = arr[high];
    int i = (low-1);

    for(int j=low; j<high; j++){
        if (arr[j] <= pivo){
            i++;
            troca(&arr[i], &arr[j]);
        }
    }
    troca(&arr[i+1], &arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high){
    if(low < high) {
        int pivo = part(arr, low, high);
        quickSort(arr, low, pivo-1);
        quickSort(arr, pivo+1, high);
    }
}

void gerarRand(int arr[], int n){
    for(int i=0; i<n; i++) {
        arr[i] = rand()%100000;
    }
}

int main(){
    int n;

    for(n=0; n<=400000; n=n+20000){
        int *arr = malloc(n * sizeof(int));

        gerarRand(arr, n);

        clock_t start = clock();
        quickSort(arr, 0, n-1);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(arr);
    }
    return 0;
}
