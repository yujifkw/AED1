/*
 * nome: 1036 C99.c
 * descrição: Bhaskara's Formula
 * data: -
 */

#include <stdio.h>
 
int main() {
    double a, b, c, delta, r1, r2, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    delta = (b*b) - (4*a*c);
    d = pow(delta,0.5);
    r1 = (-b + d)/(2*a);
    r2 = (-b - d)/(2*a);
    
    if (delta<0 || a==0) printf("Impossivel calcular\n");
    else printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    
    return 0;
}
