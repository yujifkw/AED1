/*
 * nome: 1010 C99.c
 * descrição: Simple Calculate
 * data: -
 */

#include <stdio.h>
 
int main() {
    int code1, code2, unit1, unit2;
    float price1, price2, value;
    scanf("%i%i%f %i%i%f", &code1, &unit1, &price1, &code2, &unit2, &price2);
    
    value = (unit1*price1) + (unit2*price2);
    printf("VALOR A PAGAR: R$ %0.2f\n", value);
    return 0;
}
