/*
 * nome: 1002 C99.c
 * descrição: Area of a Circle
 *data: 15/10/2024
 */

#include <stdio.h>
 
int main(){
    double r, p=3.14159, A;
    scanf("%lf", &r);
    A = p*r*r;
    printf("A=%.4lf\n", A);
    return 0;
}
