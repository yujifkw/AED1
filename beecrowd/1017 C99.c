/*
 * nome: 1017 C99.c
 * descrição: Fuel Spent
 * data: -
 */

#include <stdio.h>
 
int main() {
    double km, h, L;
    scanf("%lf %lf", &h, &km);
    
    L = km*h/12;
    printf("%0.3lf\n", L);
 
    return 0;
}
