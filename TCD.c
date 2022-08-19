#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>

int f(int x){       // Retorno Funcao Simples
    return x;
}

double S(int a, int b, int h){      // Calculo da integral
    int integral;
    int n, x, i;
    n = (b-a)/h;
    for (i=1; i<n; i++){
        x = a + i*h;
        integral = integral + f(x);
    }

    integral = n/2*(f(a) + 2*integral + f(b));
    return integral;
}

int main (){
    float x1, x2, area, areatotal; // Inicial, Final, Area, Area Total
    int h;          // Quantidade de Retangulos
    int a,b,c,d, n;
    double integral, x;
    int i;
    int intervalo;
    double anterior = 0;
    double atual;

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


    for(i=0; i<1000; i++){
        h = intervalo;
        double anterior = 0;
        double atual;

        atual = S(a, b, h);
        if((anterior - atual)<(1*(10^-6))){
            h=h/2;
            anterior = atual;
        }
        else{
            break;
        }
    }

    printf("%lf", atual);

return 0;
}
