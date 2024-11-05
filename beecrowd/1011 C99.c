/*
 * nome: 1011 C99.c
 * descrição: Sphere
 * data: -
 */

#include <stdio.h>
 
int main() {
    double R, pi, V;
    scanf("%lf", &R);
    
    pi = 3.14159;
    V = (4/3.0) * pi * R * R * R;
    printf("VOLUME = %0.3lf\n", V);
 
    return 0;
}
