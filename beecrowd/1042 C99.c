/*
 * nome: 1042 C99.c
 * descrição: Simple Sort 
 * data: 29/01
*/

#include <stdio.h>
 
int main() {
    int v[3], o[3], temp;
    
    for(int i=0; i<3; i++){
        scanf("%d", &v[i]);
        o[i] = v[i];
    }
    
    // Algoritmo Bubble Sort para ordenar o vetor 'o'
    for(int i=0; i<2; i++){
        for(int j=0; j<2-i; j++){
            if(o[j]>o[j+1]){
                temp = o[j];
                o[j] = o[j+1];
                o[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<3; i++) printf("%d\n", o[i]);
    printf("\n");
    for(int i=0; i<3; i++) printf("%d\n", v[i]);
    
    return 0;
}
