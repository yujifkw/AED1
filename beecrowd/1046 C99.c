/*
 * nome: 1046 C99.c
 * descrição: Game Time
 * data: 29/01
*/

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    if(y>x) printf("O JOGO DUROU %d HORA(S)\n", y-x);
    else if(x>y) printf("O JOGO DUROU %d HORA(S)\n", 24-x+y);
    else printf("O JOGO DUROU 24 HORA(S)\n");
    
    return 0;
}
