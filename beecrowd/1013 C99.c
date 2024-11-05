/*
 * nome: 1013 C99.c
 * descrição: The Greatest
 * data: -
 */

#include <stdio.h>
 
int main() {
    int a, b, c, m1, m2;
    scanf("%i%i%i", &a, &b, &c);
    
    m1 = (a+b+abs(a-b))/2;
    m2 = (m1+c+abs(m1-c))/2
    printf("%i eh o maior\n", m2);
 
    return 0;
}
