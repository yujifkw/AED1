/*
 * nome: 1051 C99.c
 * descrição: Taxes 
 * data: 29/01
*/

#include <stdio.h>

int main() {
    float sal, tax = 0;
    scanf("%f", &sal);
    
    if (sal <= 2000) {
        printf("Isento\n");
        return 0;
    }
    
    if (sal > 4500) tax += (sal - 4500) * 0.28;
    if (sal > 3000) tax += (4500 - 3000) * 0.18;
    if (sal > 2000) tax += (3000 - 2000) * 0.08;
    
    printf("R$ %.2f\n", tax);
    
    return 0;
}
