/*
  *nome: 2729 C99.c
  *descrição: Lista de Compras
  *data: 09/11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    char *prod;
    struct No *seg;
} No;


// Função para criar um novo No e inserir no final da lista
No *insLst(No *lst, char *prod){
    No *novo = (No*)malloc(sizeof(No));
    novo->prod = (char*)malloc(strlen(prod)+1);
    strcpy(novo->prod, prod);
    novo->seg = NULL;

    if(lst == NULL)
        return novo;
    else {
        No *temp = lst;
        while(temp->seg != NULL)
            temp = temp->seg;
        temp->seg = novo;
        return lst;
    }
}


// Função para verificar se o produto já aparece na lista
int verifProd(No *lst, char *prod){
    No *temp = lst;
    while(temp != NULL){
        if(strcmp(temp->prod, prod) == 0)
            return 0;
        temp = temp->seg;
    }
    return 1;
}


// Função para ler a lista (string)
No *lerLst(){
    No *lst = NULL;
    char prod[100];
    fgets(prod, sizeof(prod), stdin);

    char *token = strtok(prod, " \n");
    while(token != NULL){
        if(verifProd(lst, token))
            lst = insLst(lst, token);
        token = strtok(NULL, " \n");
    }
    return lst;
}


// Função para ordenar a lista (Bubble Sort)
void ordLst(No *lst){
    if(lst == NULL || lst->seg == NULL)
        return;

    No *i, *j;
    char temp[100];
    for(i=lst; i!=NULL; i=i->seg){
        for(j=i->seg; j!=NULL; j=j->seg){
            if(strcmp(i->prod, j->prod) > 0){
                strcpy(temp, i->prod);
                strcpy(i->prod, j->prod);
                strcpy(j->prod, temp);
            }
        }
    }
}


// Função para imprimir as listas ordenadas
void impLst(No *lst){
    No *temp = lst;
    while(temp != NULL){
        printf("%s", temp->prod);
        temp = temp->seg;
        if(temp != NULL)
            printf(" ");
    }
    printf("\n");
}


// Função para liberar a memoria
void freeLst(No *lst){
    No *temp;
    while(lst != NULL){
        temp = lst;
        lst = lst->seg;
        free(temp->prod);  // Libera o produto
        free(temp);  // Libera o no
    }
}


int main(){
    int N;
    scanf("%d", &N);
    getchar();

    No *lst[100] = {NULL};
    for(int i=0; i<N; i++) lst[i] = lerLst();

    for(int i=0; i<N; i++){
        ordLst(lst[i]);
        impLst(lst[i]);
        freeLst(lst[i]);
    }

    return 0;
}
