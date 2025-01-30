/*
 * nome: 1049 C99.c
 * descrição: Animal 
 * data: 29/01
*/

#include <stdio.h>

int strcmp(char *str1, char *str2){
    int i=0;
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    return 1;

int main(){
    char a[20], b[20], c[20]; 
    scanf("%s%s%s", a, b, c);
    
    if(strcmp(b, "ave")){
        if(strcmp(c, "carnivoro")) printf("aguia\n");
        else printf("pomba\n");
    }
    
    if(strcmp(b, "mamifero")){
        if(strcmp(c, "onivoro")) printf("homem\n");
        else printf("vaca\n");
    }
    
    if(strcmp(b, "inseto")){
        if(strcmp(c, "hematofago")) printf("pulga\n");
        else printf("lagarta\n");
    }
    
    if(strcmp(b, "anelideo")){
        if(strcmp(c, "hematofago")) printf("sanguessuga\n");
        else printf("minhoca\n");
    }

    return 0;
}
