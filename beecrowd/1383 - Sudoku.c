/*
 * nome: Sudoku.c
 * descrição: verifica possíveis resoluções do jogo
 * data: 24/10/2024
 */

#include <stdio.h>
#define MAX 9

/* verificar se a linha eh valida */
int verif_linhas(int S[MAX][MAX]){
    for(int i=0; i<MAX; i++) {
        int check[MAX+1] = {0};
        for(int j=0; j<MAX; j++) {
            int temp = S[i][j];
            if(temp<1 || temp>9 || check[temp] != 0) return 0;
            check[temp] = 1;
        }
    }
    return 1;
}

/* verificar se a coluna eh valida */
int verif_colunas(int S[MAX][MAX]){
    for(int j=0; j<MAX; j++) {
        int check[MAX+1] = {0};
        for(int i=0; i<MAX; i++) {
            int temp = S[i][j];
            if(temp<1 || temp>9 || check[temp] != 0) return 0;
            check[temp] = 1;
        }
    }
    return 1;
}

/* verificar se um bloco 3x3 eh valido */
int verif_bloco(int S[MAX][MAX], int lin0, int col0){
    int check[MAX+1] = {0};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            int temp = S[lin0+i][col0+j];
            if(temp<1 || temp>9 || check[temp] != 0) return 0;
            check[temp] = 1;
        }
    }
    return 1;
}

/* verificar todos os blocos 3x3 */
int verif_blocos(int S[MAX][MAX]){
    for(int i=0; i<MAX; i += 3) {
        for(int j=0; j<MAX; j += 3) {
            if(!verif_bloco(S, i, j)) return 0;
        }
    }
    return 1;
}

/* verificar se a matriz eh uma solucao */
int verif_sudoku(int S[MAX][MAX]){
    if(verif_linhas(S) && verif_colunas(S) && verif_blocos(S)) return 1;
    return 0;
}

int main(){
    int n, inst, i, j, S[MAX][MAX];
    scanf("%d", &n);

    /* ler os valores da matriz */
    for(inst=1; inst<=n; inst++) {
        for(i=0; i<MAX; i++) {
            for(j=0; j<MAX; j++) {
                scanf("%d", &S[i][j]);
            }
        }

        printf("Instancia %d\n", inst);
        if(verif_sudoku(S)) printf("SIM\n");
        else printf("NAO\n");

        printf("\n");
    }

    return 0;
}
