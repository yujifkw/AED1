/*
 * nome: 1047 C99.c
 * descrição: Game Time With Minutes
 * data: 29/01
*/

#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    int inicio = h1*60 + m1;
    int fim = h2*60 + m2;

    if (fim <= inicio) fim += 24*60;

    int duracao = fim - inicio;
    
    int horas = duracao/60;
    int minutos = duracao%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
