/*
 * nome: 1014 C99.c
 * descrição: Consumption
 * data: -
 */

#include <stdio.h>
 
int main(){
    int km;
    double liters, value;
    scanf("%i%lf", &km, &liters);

    value = km/liters;
    printf("%0.3lf km/l\n", value);
  
    return 0;
}
