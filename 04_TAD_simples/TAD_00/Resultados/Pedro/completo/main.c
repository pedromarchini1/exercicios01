#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){
    Ponto p1, p2;
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    // printf("%f %f %f %f\n", x1, y1, x2, y2);
    p1 = pto_cria(x1, y1);
    p2 = pto_cria(x2, y2);
    float dist = 0;
    dist = pto_distancia(p1, p2);
    printf("%g", dist);
    return 0;
}