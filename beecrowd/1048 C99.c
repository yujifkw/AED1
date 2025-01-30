/*
 * nome: 1048 C99.c
 * descrição: Salary Increase 
 * data: 29/01
*/

#include <stdio.h>
 
int main() {
    float sal, new;
    int per;
    scanf("%f", &sal);
    
    if(sal>2000){
        new = sal*1.04;
        per = 4;
    }
    else if(sal>1200){
        new = sal*1.07;
        per = 7;
    }
    else if(sal>800){
        new = sal*1.1;
        per = 10;
    }
    else if(sal>400){
        new = sal*1.12;
        per = 12;
    }
    else{
        new = sal*1.15;
        per = 15;
    }
    
    printf("Novo salario: %.2f\n", new);
    printf("Reajuste ganho: %.2f\n", new-sal);
    printf("Em percentual: %d \%\n", per);
 
    return 0;
}
