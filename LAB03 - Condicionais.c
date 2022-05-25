#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programacao Procedimental - LAB03 Condicionais


/* Exercicio 1
int main()
{
    int x,y;
    printf("Digite dois numeros separados por espaco(X Y): \n");
    scanf("%d %d", &x, &y);
    if (x > y){
        printf("O numero X eh maior!");
    }
    if (x = y){
        printf("Os dois numeros sao iguais!");
    }
    else{
        printf("O numero Y eh maior!");
    }
    return 0;
}
*/

/* Exercicio 2
int main (){
    float x;
    printf("Digite um numero: \n");
    scanf("%f", &x);

    if (x >= 1){
        x = x*x;
        printf("O numero digitado ao quadrado eh: %.1f", x);
    }
    if (x < 0){
        printf("O numero eh invalido!");
    }
return 0;
}
*/

/* Exercicio 3
int main (){
    float x;
    printf("Digite um numero: \n");
    scanf("%f", &x);

    if (x >= 1){
        x = sqrt(x);
        printf("%f", x);
    }
    else{
        x = x*x;
        printf("%f", x);
    }
return 0;
}
*/

/* Exercicio 4
int main (){
    float x,quadrado,raizquadrada;
    printf("Digite um numero: \n");
    scanf("%f", &x);

    if (x >= 1){
        quadrado = x*x;
        printf("O numero ao quadrado eh: %.2f \n", quadrado);
        raizquadrada = sqrt(x);
        printf("A raiz quadrada do numero eh: %.2f", raizquadrada);
    }
    else{
        printf("Numero invalido!");
    }
return 0;

}
*/


/* Exercicio 5
int main (){
    int x, y, resto;
    printf("Digite um numero: \n");
    scanf("%d", &x);
    resto = x % 2;

    if (resto == 0){
        printf("O numero eh par!\n");
    }
    else{
        printf("O numero eh impar!");
    }

return 0;
}
*/

/* Exercicio 6
int main (){
    int x, y, diferenca;
    printf("Digite dois numeros inteiros separados por espaco: \n");
    scanf("%d %d", &x, &y);
    diferenca = x - y;

    if (x > y){
        printf("O numero maior eh: %d e a diferenca entre eles eh %d", x, diferenca);
    }
    else{
        printf("O numero maior eh: %d e a diferenca entre eles eh %d.", y, diferenca);

    }
return 0;
}
*/

/* Exercicio 7
int main (){
    float x, y, diferenca;
    printf("Digite dois numeros separados por espaco: \n");
    scanf("%f %f", &x, &y);

    if (x > y){
        printf("O numero maior eh: %.2f", x);
    }
    if (y > x){
        printf("O numero maior eh: %.2f", y);
        }
    else{
        printf("Numeros iguais");
    }
return 0;
}
*/

/* Exercicio 8
int main(){
    float nota1, nota2, media;
    printf("Digite duas notas separadas por espaco: \n");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2)/2.0;

     if (0.0 <= nota1 <= 10.0 && 0.0 <= nota2 <= 10.0){
                printf("A media entre as notas eh: %f", media);
        }
    else {
        printf("Algum ou todos os numeros digitados nao estao entre 0.0 e 10.0.");
    }
return 0;
}
*/

/* Exercicio 9
int main (){
    float salario, prestacao, parcelas;
    printf("Digite o salario do trabalhador: \n");
    scanf("%f", &salario);
    printf("Quantas parcelas? \n");
    scanf("%f", &parcelas);
    prestacao = salario/parcelas;
    if (prestacao > salario*0.2){
        printf("Emprestimo nao concedido.");
    }
    else{
        printf("Emprestimo concedido.");
    }

return 0;
}
*/

// Exercicio 10
int main (){
    float altura, pesoideal;
    char sexo;
    printf("Qual a altura? \n");
    scanf("%f", &altura);
    printf("Qual o sexo? \n");
    scanf("%c", &sexo);

    switch (sexo)
    {
    case 'masculino':
        pesoideal = ((72.7*altura) - 58);
        printf("O peso ideal seria: %f", pesoideal);
        break;
    case 'feminino':
        pesoideal = ((62.1*altura) - 44.7);
        printf("O peso ideal seria: %f", pesoideal);
    default:
        printf("Digite masculino ou feminino!");
        break;
    }
}
//
