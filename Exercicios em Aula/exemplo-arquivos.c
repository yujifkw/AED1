/*
 * nome: exemplo-arquivos.c
 * descrição: teste com arquivos
 * data: 15/10/2024
 */

#include <stdio.h>
#include <stdlib.h>

 int main(){
    FILE *arq;
    char word[20];

    arq = fopen("arq_word.txt", "w");

    if(arq == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }

    printf("Escreva uma palavra para gravar no arquivo: ");
    scanf("%s", &word);

    fprintf(arq, "%s", word);

    fclose(arq);
    printf("Dados gravados com sucesso!\n");

    return 0;
 }
