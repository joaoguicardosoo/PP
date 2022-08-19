#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

float x1, x2, area, areatotal;
int h;

float encontraarea(float x1, float x2, int h)  // Area Total com Qtd Retangulos
{
    float area = 0;
    float x = x1;
    float dx = (x2 - x1) / h;
    for (int i = 0; i < h; i++)
    {
        area += (x + dx) * (x + dx);
        x += dx;
    }
    return area;
}


int main (){

    printf("Digite x1: ");              // Ponto Inicial
    scanf("%f", &x1);
    printf("Digite x2: ");              // Ponto Final
    scanf("%f", &x2);
    printf("Quantos intervalos dentro da area: ");  // Quantidade de Intervalos
    scanf("%d", &h);

    areatotal = encontraarea(x1, x2, h);    
    printf("A area total é: %.2f\n", areatotal);



return 0;
}