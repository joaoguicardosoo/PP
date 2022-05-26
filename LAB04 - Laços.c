#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programacao Procedimental - LAB04 Laços

// Exercicio 1

int main (){
    int contador, multiplos, resultado;
    for (contador = 1; contador <= 5; contador++){
        resultado = 3*contador;
        printf("O multiplo %d de 3 eh %d \n", contador, resultado);
        contador++;
    }

return 0;
}
