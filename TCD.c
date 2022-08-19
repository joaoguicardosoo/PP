#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int f(int x){
    return x;
}

int main (){
    float x1, x2, area, areatotal; // Inicial, Final, Area, Area Total
    int h;          // Quantidade de Retangulos
    int a,b,c,d, n;
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


return 0;
}
