/*
  *nome: 3160 C99.c
  *descrição: Amigos
  *data: -
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char nome[50];
    struct No *seg;
} No;


// Função para criar um novo nó e insrir no final da lista
No *insFim(No *lst, char *nome){
    No *novo = (No*)malloc(sizeof(No));
    strcpy(novo->nome, nome);
    novo->seg = NULL;

    if(lst == NULL) return novo;  // Retorna o novo nó como início da lista, caso a lista estivesse vazia
    else{
        No *temp = lst;
        while(temp->seg != NULL) temp = temp->seg;
        temp->seg = novo;  // Insere o novo nó ao final da lista
        return lst;  // Retorna a lista com o novo nó ao final
    }
}


// Função para ler uma lista (string)
No *lerLst(){
    No *lst = NULL;
    char entrada[100];
    fgets(entrada, sizeof(entrada), stdin);

    char *token = strtok(entrada, " \n");
    while(token != NULL){
        lst = insFim(lst, token);
        token = strtok(NULL, " \n");
    }
    return lst;
}


// Função para inserir a nova lista na primeira
No *insLst(No *lst1, No *lst2, char *posNome){
    No *temp = lst1;
    No *ant = NULL;
    No *last = lst2;

    while(temp != NULL && strcmp(temp->nome, posNome) != 0){
        ant = temp;
        temp = temp->seg;
    }

    if(temp != NULL){
        if(ant == NULL){ // Insere no início se o nome for o primeiro da lista
            while(last->seg != NULL) last = last->seg;
            last->seg = lst1;
            return lst2;
        }
        else{ // Insere antes do nome buscado
            while(last->seg != NULL) last = last->seg;
            ant->seg = lst2;
            last->seg = temp;
            return lst1;
        }
    }
    else{ //Insere no final da lista
        No *temp = lst1;
        while(temp->seg != NULL) temp = temp->seg;
        temp->seg = lst2;
        return lst1;
    }
}


// Função para imprimir a lista
void impLst(No *lst){
    No *temp = lst;
    while(temp != NULL){
        printf("%s", temp->nome);
        temp = temp->seg;
        if(temp != NULL)printf(" ");
    }
    printf("\n");
}


int main(){
    No *lst1 = lerLst();
    No *lst2 = lerLst();

    char posNome[50];
    scanf("%s", posNome);

    lst1 = insLst(lst1, lst2, posNome);
    impLst(lst1);

    return 0;
}
