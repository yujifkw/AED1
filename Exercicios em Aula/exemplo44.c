/*
 * nome: exemplo44.c
 * descrição: ponteiros
 *data: 15/10/2024
 */

 #include <stdio.h>

 int main(){
    int x=1, y=3;
    int *px=&x, *py=&y;

    *px = *px + *py; /* soma o conteudo armazenado em y no x */

    printf("x=%d, y=%d\n", x, y);
    printf("*px=%d, *py=%d\n", *px, *py);
    printf("px=%p, py=%p\n", px, py);
    printf("&x=%p, &y=%p\n", &x, &y);

    return 0;
 }

