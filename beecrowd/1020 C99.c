/*
 * nome: 1020 C99.c
 * descrição: Age in Days
 * data: 15/10/2024
 */

#include <stdio.h>
 
int main(){
    int dia, mes, ano;
    scanf("%d", &dia);
    
    ano = dia / 365;
    dia = dia % 365;
    mes = dia / 30;
    dia = dia % 30;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
 
    return 0;
}
