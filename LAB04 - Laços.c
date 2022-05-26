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

/* Exercicio 2
int main (){
    int contadorfor = 1;
    int contadorwhile = 1;
    int contadordowhile = 1;
    printf("Usando for: \n");

    if (contadorfor <= 100){
        for (contadorfor = 1; contadorfor <= 100; contadorfor++){
        printf("%d \n", contadorfor);
        }
    }

    printf("Usando while: \n");
    if (contadorwhile <= 100){
        while (contadorwhile <= 100){
        printf("%d \n", contadorwhile);
        contadorwhile ++;
        }
    }

    printf("Usando do while: \n");
    if (contadordowhile <= 100){
        do {
        printf("%d \n", contadordowhile);
        contadordowhile ++;
        }
        while (contadordowhile <= 100);{
        }
    }
return 0;
}
*/

/* Exercicio 3
int main (){
    int contagem = 10;
    while (contagem >= 0){
        printf("%d \n", contagem);
        contagem = contagem - 1;
    if (contagem == -1){
        printf("FIM!");
        }
    }
return 0;
}
*/

/* Exercicio 4
int main (){
    int inteiro;
    int constante = 1000;
    for (inteiro = 0; inteiro < 100000;){
        printf("%d \n", inteiro);
        inteiro = inteiro+constante;
    }

return 0;
}
*/
