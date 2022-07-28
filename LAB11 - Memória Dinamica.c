#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* Exercicio 1
int main (){
    int tam, i;
    int *x;

    printf("Qual sera o tamanho do array? ");
    scanf("%d", &tam);

    x = (int *) malloc(tam*(sizeof(int)));

    for (i=0; i<tam; i++){
        printf("Insira posicao %d: \n", i);
        scanf("%d", &x[i]);
    }

    for (i=0; i<tam; i++){
        printf("Posicao %d: %d. \n", i, x[i]);
    }


    free(x);

return 0;

}
*/

/* Exercicio 2

void* alocadinamica(int tam){
    return malloc(tam*(sizeof(char)));

}

int main (){
    int tam;
    char *x;

    printf("Qual sera o tamanho do array? ");
    scanf("%d", &tam);

    x = (char *) alocadinamica(tam);

    printf("Insira a string: \n");
    fflush(stdin);
    gets(x);

    printf("%s \n", x);

    free(x);

return 0;
}
*/


/* Exercicio 3
int main(){
    int *x;
    int i;
    int contador = 0;
    x = (int *) calloc(1500, sizeof(int));

    for (i = 0; i<1500; i++){
        if (x[i] == 0){
            contador = contador + 1;
        }
        else {
            printf("Nao possui zero!");
        }
    }
        printf("Quantidade de zeros no array: %d", contador);

    free (x);

return 0;
}
*/

// Exercicio 4
int main (){
    int *x;
    int i;
    int tamanho = 5;

    x = (int *) malloc(tamanho*(sizeof(int)));

    for (i=0; i<tamanho; i++){
        printf("Insira posicao %d: \n", i);
        scanf("%d", &x[i]);
        if (x[i] < 0){
            break();
            }
        }

      for (i=0; i<tam; i++){
        printf("Posicao %d: %d. \n", i, x[i]);
      }

    realloc(x, 30)
return 0;
}
