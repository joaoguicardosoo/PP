#include <stdio.h>
#include <stdlib.h>


/* Exercicio 3 PROVA
int main()
{
   float salario;
   printf("-- Aumento Salarial -- \n");
   printf("Digite o salario: ");
   scanf("%f", &salario);

   printf("Apos 25%% de aumento, o salario fica em R$%.2f", salario*1.25);

return 0;
}
*/



/* Exercicio 4
int main (){
    float c, f, temperatura;
    char unidade;
    printf("Quantos graus: ");
    scanf("%f", &temperatura);
    printf("Qual a unidade: ");
    fflush(stdin);
    scanf("%c", &unidade);

    if ((unidade == 'c') || (unidade == 'C')){
        f = temperatura*(9.0/5.0)+32.0;
        printf("%.2f Celsius em Fahrenheit eh %.2f", temperatura, f);
    }
    else if ((unidade == 'f') || (unidade == 'F')){
        c = (temperatura-32.0)/(9.0/5.0);
        printf("%.2f Fahrenheit em Celsius eh %.2f", temperatura, c);
    }
    else {
        printf("Unidade nao eh valida!");
    }

return 0;
}
*/

/* Exercicio 5
int main (){
    int i, j, x;
    printf("Quantas linhas? ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++){
        for (j = 1; j <= i; j++){
            printf("*");
        }
    printf("\n");
    }


return 0;
}
*/

/* Exercicio 6
int main (){
        int v1, v2;
        int escolha;
        int loop = 0;
        printf("Escolha uma opcao: \n");
        printf("1 - Adicao \n");
        printf("2 - Subtracao \n");
        printf("3 - Multiplicacao \n");
        printf("4 - Divisao \n");
        printf("5 - Modulo \n");
        printf("6 - SAIR \n");

        while(loop == 0){
        printf("Qual a sua opcao?");
        scanf("%d", &escolha);
            switch(escolha){
                case 1:
                    printf("Digite dois numeros: ");
                    scanf("%d %d", &v1, &v2);
                    printf("A soma dos dois numeros eh: %d \n", v1+v2);
                    break;
                case 2:
                    printf("Digite dois numeros: ");
                    scanf("%d %d", &v1, &v2);
                    printf("A subtracao dos dois numeros eh: %d \n", v1-v2);
                    break;
                case 3:
                    printf("Digite dois numeros: ");
                    scanf("%d %d", &v1, &v2);
                    printf("A multiplicacao dos dois numeros eh: %d \n", v1*v2);
                    break;
                case 4:
                    printf("Digite dois numeros: ");
                    scanf("%d %d", &v1, &v2);
                    printf("A divisao dos dois numeros eh: %d \n", v1/v2);
                    break;
                case 5:
                    printf("Digite dois numeros: ");
                    scanf("%d %d", &v1, &v2);
                    printf("O modulo dos dois numeros eh: %d \n", v1%v2);
                    break;
                case 6:
                    loop = 1;

            }
        }


return 0;
}
*/
