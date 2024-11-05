/*
 * nome: 1012 C99.c
 * descrição: Area
 * data: -
 */

#include <stdio.h>
 
int main() {
     double a, b, c, pi, tri, cir, tra, qua, ret;
     scanf("%lf %lf %lf", &a, &b, &c);
     
     pi = 3.14159;
     tri = a*c/2;
     cir = pi*c*c;
     tra = (a+b)*c/2;
     qua = b*b;
     ret = a*b;
     
     printf("TRIANGULO: %0.3lf\n", tri);
     printf("CIRCULO: %0.3lf\n", cir);
     printf("TRAPEZIO: %0.3lf\n", tra);
     printf("QUADRADO: %0.3lf\n", qua);
     printf("RETANGULO: %0.3lf\n", ret);

    return 0;
}
