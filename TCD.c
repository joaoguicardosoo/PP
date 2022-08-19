#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int f(int x){
    return x;
}

float encontraarea(float x1, float x2, int n)  // Area Total com Qtd Retangulos
{
    float area = 0;
    float x = x1;
    float dx = (x2 - x1) / n;
    for (int i = 0; i < h; i++)
    {
        area += (x + dx) * (x + dx);
        x += dx;
    }
    return area;
}


int main (){
    float x1, x2, area, areatotal; // Inicial, Final, Area, Area Total
    int h;          // Quantidade de Retangulos
    int a,b,c,d, n;
    float intervalo;
    double integral, x;
    int i;

    printf("Digite o valor de a da funcao: "); // Leitura dos coeficientes da funcao
    scanf("%d", &a);
    printf("Digite o valor de b da funcao: ");
    scanf("%d", &b);
    printf("Digite o valor de c da funcao: ");
    scanf("%d", &c);
    printf("Digite o valor de d da funcao: ");
    scanf("%d", &d);
    printf("Digite x1: ");
    scanf("%f", &x1);
    printf("Digite x2: ");
    scanf("%f", &x2);
    printf("Quantos retangulos dentro da area: ");
    scanf("%d", &h);

    
    n = (b-a)/h;
    for (i=1; i<n; i++){
        x = a + i*h;
        integral = integral + (x*x*x*x);
    }

    integral = n/2*(f(a) + 2*integral + f(b));

    areatotal = encontraarea(x1, x2, h);    
    printf("A area total é: %.2f\n", areatotal);

return 0;
}
