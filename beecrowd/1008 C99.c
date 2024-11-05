/*
 * nome: 1008 C99.c
 * descrição: Salary
 * data: -
 */

#include <stdio.h>
 
int main() {
    int n, t;
    float s, v;
    scanf("%i%i%f", &n, &t, &v);
    s=t*v;
    printf("NUMBER = %i\nSALARY = U$ %0.2f\n", n, s);
    return 0;
}
