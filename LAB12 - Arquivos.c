#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Exercicio 1
int main (){
    FILE *caracteres;
    int x;

    caracteres = fopen ("caracteres.txt", "w");

    if (fopen == NULL){
        printf("Erro ao abrir!");
        exit(1);
    }

    while(1){
        printf("Insira um numero no arquivo (Ao digitar 0, voce sai): ");
        scanf("%d", &x);
        if (x == 0){
            break;
        }
    }

    fclose(caracteres);

return 0;
}


// Exercicio 2
