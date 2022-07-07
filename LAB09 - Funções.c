#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercicio 5
int simplifica (int numerador, int denominador){
     int aux, resto;
     while(denominador!=0){
        aux = numerador%denominador;
        numerador = denominador;
        denominador = resto;
     }
     return numerador;
}

int main (){
    int numerador, denominador, a,b;
    printf("Qual o numerador? ");
    scanf("%d", &numerador);
    printf("Qual o denominador? ");
    scanf("%d", &denominador);

    simplifica(numerador, denominador);

    printf("MDC: %d", numerador);


return 0;
}
*/

// Exercicio 6


int cont_a = 0;
int cont_b = 0;

void separavetor (int x[30], int a[30], int b[30]){
    int i;
        for(i=0;i<30;i++){
                if (x[i]%2==0){
                    a[cont_a] = x;
                    cont_a++;
                }
                else{
                    b[cont_b] = x;
                    cont_b++;
            }
        }
}


int main(){
    int x[30], a[30], b[30];
    int i;

    for (i=0; i<30; i++){    // Leitura do vetor 30 elementos
        printf("Digite o %d elemento: ", i);
        scanf("%d", &x[i]);
    }

    separavetor(x, a, b);
    printf("Vetor X: ");
    for(i=0; i<30; i++){
        printf("%d ", x[i]);
    }
    printf("\n\n");
    printf("Vetor A");
    for(i=0; i<cont_a]; i++){
        printf("%d ", a[i]);
    printf("\n\n");



return 0;
}

