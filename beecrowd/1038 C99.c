/*
 * nome: 1038 C99.c
 * descrição: Snack 
 * data: 29/01
*/

#include <stdio.h>
 
int main() {
    int x, y;
    float v;
    
    scanf("%d%d", &x, &y);
    
    switch(x){
        case 1 : v = 4; break;
        case 2 : v = 4.5; break;
        case 3 : v = 5; break;
        case 4 : v = 2; break;
        case 5 : v = 1.5; break;
        default: v = 0;
    }
    
    printf("Total: R$ %.2f\n", v * y);
 
    return 0;
}
