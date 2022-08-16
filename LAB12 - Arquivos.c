#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Exercicio 1
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
        fflush(stdin);
        getc(caracteres);
        fflush(stdin);
        fputc(x, caracteres);
        if (x == '0'){
            break;
        }
    }

    fclose(caracteres);

return 0;
}
*/

// Exercicio 2
int main (){
    FILE *caracteres;
    char x;
    char z;
    int contador;

    caracteres = fopen("caracteres.txt", "r");

    if (fopen == NULL){
        printf("Erro ao abrir!");
    }

    printf("Digite um caractere para ser lido: ");
    fflush(stdin);
    scanf("%c", &x);
    fflush(stdin);

    while(1) {
      z = fgetc(caracteres);
      if( feof(caracteres) ) {
         break ;
      }
      printf("%c", z);
   }
   fclose(caracteres);

return 0;
}

// Exercicio 3
int main (){
    FILE *pessoas;
    char s








    return 0;
}