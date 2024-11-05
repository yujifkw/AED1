/*
 * nome: 1019 C99.c
 * descrição: Time Conversion
 * data: -
 */

#include <stdio.h>
 
int main() {
    int sec, min, hr;
    scanf("%d", &sec);
    
    hr = sec / 3600;
    sec = sec % 3600;
    
    min = sec / 60;
    sec = sec % 60;
    
    printf("%d:%d:%d\n", hr, min, sec);
 
    return 0;
}
