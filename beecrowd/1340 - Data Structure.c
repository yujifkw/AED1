/*
 * nome: 1340 C99.c
 * descrição: I Can Guess the Data Structure!
 * data: 05/12
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*=====================[ STRUCT ]=====================*/

typedef struct No{
    int x;
    struct No *seg;
} No;

/*=====================[ PILHA ]=====================*/

void insPilha(int *pilha, int x, int *topo){
    pilha[++(*topo)] = x;
}

int remPilha(int *pilha, int *topo){
    if(*topo == -1) return 0; // Pilha vazia
    return pilha[(*topo)--];
}

/*=====================[ FILA ]=====================*/

void insFila(No **fila, int x){
    No *novo = (No*)malloc(sizeof(No));
    novo->x = x;
    novo->seg = NULL;

    if(*fila == NULL) *fila = novo; //Fila Vazia
    else{
        No *temp = *fila;
        while(temp->seg != NULL) temp = temp->seg;
        temp->seg = novo;
    }
}

int remFila(No **fila){
    if(*fila == NULL) return 0; // Fila vazia

    No *temp = *fila;
    int x = temp->x;
    *fila = temp->seg;
    free(temp);

    return x;
}

/*=====================[ FILA PRIORIDADE ]=====================*/

void insFP(No **fp, int x){
    No *novo = (No*)malloc(sizeof(No));
    novo->x = x;

    if(*fp == NULL || (*fp)->x <= x){
        novo->seg = *fp;
        *fp = novo;
    }
    else{
        No *temp = *fp;
        while(temp->seg != NULL && temp->seg->x > x) temp = temp->seg;
        novo->seg = temp->seg;
        temp->seg = novo;
    }
}

int remFP(No **fp){
    if (*fp == NULL) return 0; // Fila vazia

    No *temp = *fp;
    int x = temp->x;
    *fp = temp->seg;
    free(temp);

    return x;
}

/*=====================[ VERIFICAR ]=====================*/

void verif(int n){
    int *pilha = (int*)malloc(n * sizeof(int));
    int topo = -1;
    No *fila = NULL, *fp = NULL;

    bool ehPilha = true, ehFila = true, ehFP = true;

    for (int i=0; i<n; i++){
        int cmd, x;
        scanf("%d %d", &cmd, &x);

        switch(cmd){
            case 1:
                if(ehPilha) insPilha(pilha, x, &topo);
                if(ehFila) insFila(fila, x);
                if(ehFP) insFP(fp, x);
                break;
            case 2:
                if(ehPilha) ehPilha = (remPilha(pilha, &topo) == x);
                if(ehFila) ehFila = (remFila(fila) == x);
                if(ehFP) ehFP = (remFP(fp) == x);
                break;
        }
    }

    if(ehPilha + ehFila + ehFP > 1) printf("not sure\n");
    else if(ehPilha) printf("stack\n");
    else if(ehFila) printf("queue\n");
    else if(ehFP) printf("priority queue\n");
    else printf("impossible\n");

    free(pilha);
}

/*=====================[ MAIN ]=====================*/

int main(){
    int n;
    while(scanf("%d", &n) != EOF) verif(n);
    return 0;
}
