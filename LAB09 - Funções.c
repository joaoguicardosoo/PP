#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* Exercicio 1
int data(int dia, int mes, int ano){
    switch (mes){
    case 01:
        printf("%d de Janeiro de %d", dia, ano);;
        break;

    case 02:
        printf("%d de Fevereiro de %d", dia, ano);;
        break;

    case 03:
        printf("%d de Marco de %d", dia, ano);;
        break;

    case 04:
        printf("%d de Abril de %d", dia, ano);;
        break;

    case 05:
        printf("%d de Maio de %d", dia, ano);;
        break;

    case 06:
        printf("%d de Junho de %d", dia, ano);;
        break;

    case 07:
        printf("%d de Julho de %d", dia, ano);;
        break;

    case '08':
        printf("%d de Agosto de %d", dia, ano);;
        break;

    case '09':
        printf("%d de Setembro de %d", dia, ano);;
        break;

    case 10:
        printf("%d de Outubro de %d", dia, ano);;
        break;

    case 11:
        printf("%d de Novembro de %d", dia, ano);;
        break;

    case 12:
        printf("%d de Dezembro de %d", dia, ano);;
        break;
    default:
        printf("Mes Invalido!");
        break;
    }
return 1;
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
*/

/* Exercicio 2

int convertesegundo(int horas, int minutos, int segundos){
    int segundototal;
    segundototal = (horas*3600)+(minutos*60)+segundos;
    printf("Total em segundos: %d", segundototal);
    return 1;
}

int main (){
    int horas;
    int minutos;
    int segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    convertesegundo(horas, minutos, segundos);

return 0;
}
*/

// Exercicio 3
int mediaalunos(int nota1, int nota2, int nota3, char letra[1]){
    int media;
    switch (letra[1]){
    case 'A':
        media = (nota1+nota2+nota3)/3;
        printf("A media aritmetica das notas dos alunos eh: %d", media);
        break;

    case 'P':
        media = ((nota1*5)+(nota2*3)+(nota3*2))/10;
        printf("A media ponderada das notas dos alunos eh: %d", media);
    }
    return 0;

}

int main (){
    int nota1, nota2, nota3;
    char letra[1];

    printf("Digite a nota 1: ");
    scanf("%d", &nota1);
    printf("Digite a nota 2: ");
    scanf("%d", &nota2);
    printf("Digite a nota 3: ");
    scanf("%d", &nota3);
    printf("Qual media? A ou P: ");
    scanf(" %c", &letra);

    mediaalunos(nota1, nota2, nota3, letra[1]);

return 0;
}


// Exercicio 4


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
