#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100000;
    }
}

int main() {
    int n;

    for(n=0; n<=400000; n=n+20000){
        int* arr = malloc(n * sizeof(int));

        generateRandomArray(arr, n);

        clock_t start = clock();
        insertionSort(arr, n);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("n=%d : %.3f segundos\n", n, elapsed_time);

        free(arr);
    }

    return 0;
}
