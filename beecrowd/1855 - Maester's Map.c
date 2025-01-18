/*
 * nome: 1855 C99.c
 * descrição: mapaa do Meistre
 * data: 18/01
*/

#include <stdio.h>

int main(){
    int largura, altura;
    char mapa[100][100];
    int controle[100][100];

    scanf("%d %d", &largura, &altura);
    for(int i = 0; i < altura; i++) scanf("%s", mapa[i]);

    int x=0, y=0;
    int dx = 0, dy = 1; // Direção inicial (para a direita)

    while(1){
        // Verifica se saiu do mapa
        if(x<0 || x >= altura || y<0 || y >= largura){
            printf("!\n");
            return 0;
        }

        // Verifica se já visitou
        if(controle[x][y]){
            printf("!\n");
            return 0;
        }

        // Marca a posição como visitada
        controle[x][y] = 1;

        // Verifica conteúdo
        if(mapa[x][y] == '*'){
            printf("*\n");
            return 0;
        }

        // Comando a seguir
        switch(mapa[x][y]){
            case '>':
                dx = 0;
                dy = 1;
                break;
            case '<':
                dx = 0;
                dy = -1;
                break;
            case 'v':
                dx = 1;
                dy = 0;
                break;
            case '^':
                dx = -1;
                dy = 0;
                break;
            case '.':
                break;
            default:
                printf("!\n");
                return 0;
        }
        x += dx;
        y += dy;
    }
    return 0;
}
