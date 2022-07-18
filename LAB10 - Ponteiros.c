#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Exercicio 1

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
*/

/* Exercicio 2
int main (){
    int x, y;

    x = 1;
    y = 2;

    printf("%x \n", &x);
    printf("%x \n", &y);

    if (&x > &y){
        printf("Endereco: %x \n", &x);
        printf("Conteudo: %d", x);
    }
    else{
        printf("Endereco: &x", &y);
    }


return 0;
}
*/

/* Exercicio 3

int main (){
    float x[9] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    for(i=0; i<10; i++){
        printf("Endereco da posicao %d: %x \n", i, &x[i]);
    }


return 0;
}
*/

// Exercicio 4
int main (){
    float a[2][2];
    int i, j;
    a[2] = {1,2,3};

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%x", &a[i][j])
        }
    }




return 0;
}
