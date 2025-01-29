/*
 * nome: 1152 C99.c
 * descrição: Notas e Moedas
 * data: 29/01
*/

#include <stdio.h>

int main() {
    double n;
    int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1;
    scanf("%lf", &n);

    // Conversão de reais para centavos
    int cent = (int)(n * 100 + 0.5); // Arredonda para garantir precisão com centavos

    n100 = cent / 10000;
    cent %= 10000;

    n50 = cent / 5000;
    cent %= 5000;

    n20 = cent / 2000;
    cent %= 2000;

    n10 = cent / 1000;
    cent %= 1000;

    n5 = cent / 500;
    cent %= 500;

    n2 = cent / 200;
    cent %= 200;

    m100 = cent / 100;
    cent %= 100;

    m50 = cent / 50;
    cent %= 50;

    m25 = cent / 25;
    cent %= 25;

    m10 = cent / 10;
    cent %= 10;

    m5 = cent / 5;
    cent %= 5;

    m1 = cent;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
  
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}
