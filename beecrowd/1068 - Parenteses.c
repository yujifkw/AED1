/*
 * nome: 1068 C99.c
 * descrição: Balanço de Parenteses I
 * data: 17/11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verif(const char *exp){
    int size = strlen(exp);
    int *pilha = (int*)malloc(size * sizeof(int));
    int topo = 0; // Inicializa a pilha como vazia

    for(int i=0; i<size; i++){
        if(exp[i] == '(') pilha[++topo] = '('; // Empilha
        else if(exp[i] == ')'){
            if(topo == 0){
                free(pilha);
                return 0;
            }
            topo--; // Desempilha
        }
    }

    int check = (topo == 0); // Pilha vazia indica balanceamento
    free(pilha);
    return check;
}

int main(){
    char exp[1001];

    while(fgets(exp, sizeof(exp), stdin)){
        exp[strcspn(exp, "\n")] = '\0';
        if (verif(exp)) printf("correct\n");
        else printf("incorrect\n");
    }

    return 0;
}
