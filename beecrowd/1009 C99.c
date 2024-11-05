/*
 * nome: 1009 C99.c
 * descrição: Salary with Bonus
 * data: -
 */

#include <stdio.h>
 
int main() {
    char name[20];
    scanf("%s", &name);
    
    double salary, sold, end;
    scanf("%lf %lf", &salary, &sold);
    end = salary + (sold*15/100);
    printf("TOTAL = R$ %0.2lf\n", end);
 
    return 0;
}
