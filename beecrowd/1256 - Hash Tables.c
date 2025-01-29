/*
 * nome: 1256 C99.c
 * descrição: Tabelas Hash
 * data: 29/01
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct hashtable {
    int value;
    struct hashtable *seg;
} Hash;

void h(int M, int C){
    int x, key;
    Hash *hash[M];

    for(int i=0; i<M; i++) hash[i] = NULL;

    for(int i=0; i<C; i++){
        scanf("%d", &x);
        key = x % M;

        Hash *nova = (Hash*)malloc(sizeof(Hash));
        nova->value = x;
        nova->seg = NULL;

        if(hash[key] == NULL) hash[key] = nova;
        else{
            Hash *temp = hash[key];
            while(temp->seg != NULL) temp = temp->seg;
            temp->seg = nova;
        }
    }

    for(int i=0; i<M; i++){
        printf("%d -> ", i);
        Hash *temp = hash[i];
        while(temp != NULL){
            printf("%d -> ", temp->value);
            temp = temp->seg;
        }
        printf("\\\n");
    }

    printf("\n");

    for(int i=0; i<M; i++){
        Hash *temp = hash[i];
        while(temp != NULL){
            Hash *aux = temp;
            temp = temp->seg;
            free(aux);
        }
    }
}

int main(){
    int N, M, C;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d%d", &M, &C);
        h(M,C);
    }

    printf("\n");

    return 0;
}
