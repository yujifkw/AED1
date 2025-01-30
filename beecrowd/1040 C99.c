/*
 * nome: 1040 C99.c 
 * descrição: Average 3
 * data: 29/01
*/

#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4, nE;
    float m;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    m = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    
    printf("Media: %.1f\n", m);
    if(m>=7) printf("Aluno aprovado.\n");
    else if(m<5) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &nE);
        m = (m + nE) / 2;
        printf("Nota do exame: %.1f\n", nE);
        if(m<5) printf("Aluno reprovado.\n");
        else printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", m);
    }
    
    return 0;
}
