#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Exercicio 1
int main (){
    FILE *caracteres;
    char x;

    caracteres = fopen("caracteres.txt", "w");

    if (fopen == NULL){
        printf("Erro ao abrir!");
        exit(1);
    }


    for (int i=0; i<10; i++){
        printf("Insira um caractere no arquivo (Ao digitar 0, voce sai): ");
        scanf("%c", &x);
        fputc(x, caracteres);
        if (x == '0'){
            break;
        }
    }


    fprintf(caracteres, "%d", x);
    fclose(caracteres);

return 0;
}


// Exercicio 2
