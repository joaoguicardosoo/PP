#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Exercicio 1

int main (){
    int x, *a;
    float y, *b;
    char z, *c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Digite um valor float: ");
    scanf("%f", &y);
    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &z);


    printf("Inteiro = %d \n", x);
    printf("Float = %f \n", y);
    printf("Char = %c \n", z);


    a = &x;
    b = &y;
    c = &z;

    *a = 5;
    *b = 2.3;
    *c = 't';

    printf("Inteiro ponteiro: %d \n", *a);
    printf("Float ponteiro: %f \n", *b);
    printf("Char ponteiro: %c \n", *c);



return 0;
}
//

// Exercício 2
