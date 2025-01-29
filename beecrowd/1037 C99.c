/*
 * nome: 1037 C99.c
 * descrição: Intervalos
 * data: 29/01
*/

#include <stdio.h>
 
int main(){
    float x;
    scanf("%f", &x);
    
    if(x<0 || x>100) printf("Fora de intervalo\n");
    else if(x <= 25) printf("Intervalo [0,25]\n");
    else if(x <= 50) printf("Intervalo (25,50]\n");
    else if(x <= 75) printf("Intervalo (50,75]\n");
    else if(x <= 100) printf("Intervalo (75,100]\n");
    
    return 0;
}
