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

/* Exercicio 5
int main(){
    int valor, contador, somatotal = 0;
    for (contador = 1; contador <= 10; contador++){
        printf("Digite o %d valor: \n", contador);
        scanf("%d", &valor);
        somatotal = somatotal + valor;
    }
    printf("A soma total dos numeros eh: %d", somatotal);
return 0;
}
*/

/* Exercicio 6
int main (){
    int inteiro, valortotal = 0, i;
    float media;
    for (i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &inteiro);
        valortotal = valortotal + inteiro;
    }
    if (i == 10){
        media = valortotal/i;
        printf("A media dos 10 numeros eh: %.2f", media);
    }


    return 0;
}
*/

/* Exercicio 7
int main (){
    int inteiro, valortotal = 0, i;
    float media;
    for (i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &inteiro);
        if (inteiro > 0){
        valortotal = valortotal + inteiro;
        }
        else {
            printf("Digite um numero positivo! \n");
            break;
        }
    }
    if (i == 10){
        media = valortotal/i;
        printf("A media dos 10 numeros eh: %.2f", media);
    }


    return 0;
}
*/

// Exercicio 8
int main (){
    int inteiro


    return 0;
}
