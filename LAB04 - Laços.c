#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programacao Procedimental - LAB04 Laços

/* Exercicio 1

int main (){
    int contador, resultado;
    for (contador = 1; contador <= 5; contador++){
        resultado = 3*contador;
        printf("O multiplo %d de 3 eh %d. \n", contador, resultado);;
    }

return 0;
}
*/

// Exercicio 2
int main (){
    int contadorfor, contadorwhile = 1, contadordowhile = 1;
    printf("Usando for: \n");

    if (contadorfor <= 100){
    for (contadorfor = 0; contadorfor <= 100; contadorfor++){
        printf("%d ", contadorfor);
        }
    }

    printf("Usando while: \n");
    while (contadorwhile <= 100){
        printf("%d ", contadordowhile);
        contadordowhile ++;
    }

return 0;
}
