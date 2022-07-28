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


// Exercicio 3
int main(){
    int *x;





return 0;
}
*/
