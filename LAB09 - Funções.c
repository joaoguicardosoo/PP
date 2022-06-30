#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Exercicio 1
int data(int dia, int mes, int ano){
    char mesextenso[25];
    switch (mes){
    case 01:
        mesextenso="janeiro";
        break;

    case 02:
        mesextenso="fevereiro";
        break;

    case 03:
        mesextenso="marco";
        break;

    case 04:
        mesextenso="abril";
        break;

    case 05:
        mesextenso="maio";
        break;

    case 06:
        mesextenso="junho";
        break;

    case 07:
        mesextenso="julho";
        break;

    case 08:
        mesextenso="agosto";
        break;

    case 09:
        mesextenso="setembro";
        break;

    case 10:
        mesextenso="outubro";
        break;

    case 11:
        mesextenso="novembro";
        break;

    case 12:
        mesextenso="dezembro";
        break;
    default:
        printf("Mes Invalido!");
        break;
    }

    printf("%d de %s de %d", dia, mesextenso, ano);

}


void main(){
    int dia;
    int mes;
    int ano;

    printf("Digite o dia com 2 digitos: ");
    scanf("%d", &dia);
    printf("Digite o mes com 2 digitos: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    data(dia, mes, ano);

}
