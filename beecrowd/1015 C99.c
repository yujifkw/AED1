/*
 * nome: 1015 C99.c
 * descrição: Distance Between Two Points
 * data: -
 */

#include <stdio.h>
 
int main() {
    double x1, x2, y1, y2, dis;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
    dis = pow((pow((x2-x1),2) + pow((y2-y1),2)),0.5);
    printf("%0.4lf\n", dis);
 
    return 0;
}
