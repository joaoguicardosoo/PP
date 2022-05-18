#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /* Exercício 1
int main(){
    int x;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);

    printf("O numero inteiro e: %d", x);

return 0;
}
*/

/* Exercício 2
int main(){
    float x;
    printf("Digite um numero real: \n");
    scanf("%f", &x);

    printf("O numero real e: %f", x);

return 0;
}
*/

/* Exercício 3
int main (){
    int x,y,z,soma;
    printf("Digite tres numeros inteiros separados por espaco: \n");
    scanf("%d %d %d", &x, &y, &z);
    soma = x+y+z;
    printf("A soma dos tres numeros eh %d.", soma);
return 0;
}
*/

/* Exercicio 4
int main (){
    float x, quadrado;
    printf("Digite um numero real: \n");
    scanf("%f", &x);
    quadrado=x*x;
    printf("O quadrado do numero digitado eh: %f", quadrado);
return 0;
}
*/


/* Exercicio 5
int main (){
    float x, quintaparte;
    printf("Digite um numero real: \n");
    scanf("%f", &x);
    quintaparte=x/5;
    printf("A quinta parte deste numero eh %f", quintaparte);
return 0;
}
*/

/* Exercicio 6
int main () {
    float celsius, fahrenheit;
    printf("Digite uma temperatura em graus Celsius: \n");
    scanf("%f", &celsius);
    fahrenheit = celsius*(9.0/5.0)+32;
    printf("A temperatura em Celsius convertida em fahrenheit eh: %.1fF", fahrenheit);
return 0;
}
*/

/* Exercicio 7
int main (){
    float celsius, fahrenheit;
    printf("Digite uma temperatura em graus Fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celsius = 5.0*(fahrenheit-32.0)/9.0;
    printf("A temperatura em Fahrenheit convertida em Celsius eh: %.1fC", celsius);
return 0;
}
*/

/* Exercicio 8
int main (){
    float kelvin, celsius;
    printf("Digite uma temperatura em graus Kelvin: \n");
    scanf("%f", &kelvin);
    celsius = kelvin-273,15;
    printf("A temperatura em Kelvin convertida em Celsius eh: %.1fC", celsius);

return 0;
}
*/

/* Exercicio 9
int main (){
    float celsius, kelvin;
    printf("Digite uma temperatura em graus Celsius: \n");
    scanf("%f", &kelvin);
    kelvin = celsius+273,15;
    printf("A temperatura em Celsius convertida em Kelvin eh: %.1fC", kelvin);

return 0;
}
*/

/* Exercicio 10
int main (){
    float km, ms;
    printf("Qual a velocidade em km/h? \n");
    scanf("%f", &km);
    ms = km/3.6;
    printf("Sua velocidade em m/s eh %.1f", ms);
return 0;
}
*/

/* Exercicio 11
int main (){
    float ms, km;
    printf("Qual a velocidade em m/s? \n");
    scanf("%f", &ms);
    km = ms*3.6;
    printf("Sua velocidade em km/h eh %.1f", km);
return 0;
}
*/

/* Exercicio 12
int main (){
    float milhas, km;
    printf("Qual a distancia em milhas? \n");
    scanf("%f", &milhas);
    km = 1.61*milhas;
    printf("Sua distancia em km eh %.1f", km);
return 0;
}
*/

/* Exercicio 13
int main (){
    float km, milhas;
    printf("Qual a distancia em km? \n");
    scanf("%f", &km);
    milhas = km/1.61;
    printf("Sua distancia em milhas eh %.1f", milhas);
return 0;
}
*/

/* Exercicio 14
int main(){
    float anggraus, angradianos;
    printf("Digite um angulo em graus: \n");
    scanf("%f", &anggraus);
    angradianos = anggraus*3.141592/180;
    printf("Seu angulo em radianos eh %.4f", angradianos);
return 0;
}
*/

/* Exercicio 15
int main(){
    float angradianos, anggraus;
    printf("Digite um angulo em radianos: \n");
    scanf("%f", &angradianos);
    anggraus = angradianos*180/3.141592;
    printf("Seu angulo em graus eh %.4fC.", anggraus);
return 0;
}
*/

/* Exercicio 16
int main (){
    float polegada, centimetro;
    printf("Digite um valor em polegadas: \n");
    scanf("%f", &polegada);
    centimetro=polegada*2.54;
    printf("Seu valor em centimetros eh: %.2f", centimetro);
return 0;
}
*/

/* Exercicio 17
int main (){
    float centimetro, polegada;
    printf("Digite um valor em centimetros: \n");
    scanf("%f", &centimetro);
    polegada=centimetro/2.54;
    printf("Seu valor em polegadas eh: %.2f", polegada);
return 0;
}
*/

/* Exercicio 18
int main (){
    float metros, litros;
    printf("Digite o valor do volume em metros cubicos: \n");
    scanf("%f", &metros);
    litros = 1000*metros;
    printf("O valor do seu volume em litros eh: %.1f", litros);

return 0;
}
*/

/* Exercicio 19
int main (){
    float litros, metros;
    printf("Digite o valor do volume em litros: \n");
    scanf("%f", &litros);
    metros = litros/1000;
    printf("O valor do seu volume em metros cubicos eh: %.1f", metros);

return 0;
}
*/

/* Exercicio 20
int main (){
    float kg, libras;
    printf("Digite o valor de massa em kg: \n");
    scanf("%f", &kg);
    libras = kg/0.45;
    printf("O valor de massa em libras eh: %.1f", libras);

return 0;
}
*/

/* Exercicio 21
int main (){
    float libras, kg;
    printf("Digite o valor de massa em libras: \n");
    scanf("%f", &libras);
    kg = libras*0.45;
    printf("O valor de massa em kg eh: %.1f", kg);

return 0;
}
*/

/* Exercicio 22
int main (){
    float jardas, metros;
    printf("Digite o valor de comprimento em jardas: \n");
    scanf("%f", &jardas);
    metros = 0.91*jardas;
    printf("O valor de comprimento em metros eh: %.1f", metros);

return 0;
}
*/

/* Exercicio 23
int main (){
    float metros, jardas;
    printf("Digite o valor de comprimento em metros: \n");
    scanf("%f", &metros);
    jardas = metros/0.91;
    printf("O valor de comprimento em jardas eh: %.1f", jardas);

return 0;
}
*/

/* Exercicio 24
int main (){
    float metros, acres;
    printf("Digite o valor de area em metros quadrados: \n");
    scanf("%f", &metros);
    acres = metros*0.000247;
    printf("O valor de area em acres eh: %.6f", acres);

return 0;
}
*/

/* Exercicio 25
int main (){
    float acres, metros;
    printf("Digite o valor de area em acres: \n");
    scanf("%f", &acres);
    metros = acres*4048.58;
    printf("O valor de area em metros quadrados eh: %.4f", metros);

return 0;
}
*/

/* Exercicio 26
int main (){
    float metros, hectares;
    printf("Digite o valor de area em metros quadrados: \n");
    scanf("%f", &metros);
    hectares = metros*0.0001;
    printf("O valor de area em hectares eh: %.4f", hectares);

return 0;
}
*/

/* Exercicio 27
int main (){
    float hectares, metros;
    printf("Digite o valor de area em hectares: \n");
    scanf("%f", &hectares);
    metros = hectares*10000;
    printf("O valor de area em metros eh: %.1f", metros);

return 0;
}
*/

/* Exercicio 28
int main (){
    int x,y,z,soma;
    printf("Digite tres valores separados por espaco: \n");
    scanf("%d %d %d", &x, &y, &z);
    soma = x*x+y*y+z*z;
    printf("O valor da soma dos quadrados dos valores eh: %d", soma);

return 0;
}
*/

/* Exercicio 29
int main (){
    float a,b,c,d,media;
    printf("Digite quatro notas separados por espaco: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    media = (a+b+c+d)/4;
    printf("O valor da media das notas eh: %.2f", media);

return 0;
}
*/

/* Exercicio 30
int main (){
    float real, cotacaoUS, dolar;
    printf("Digite um valor em R$: \n");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar US$: \n");
    scanf("%f", &cotacaoUS);
    dolar = real/cotacaoUS;
    printf("Seu valor em reais convertido em dolares eh: %.2fUSD", dolar);
return 0;
}
*/

/* Exercicio 31
int main (){
    int x, antecessor, sucessor;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    antecessor = x-1;
    sucessor = x+1;
    printf("O numero antecessor dele eh: %d. \n", antecessor);
    printf("O numero sucessor dele eh: %d.", sucessor);

return 0;
}
*/

/* Exercicio 32
int main (){
    int x, antecessor, sucessor, total;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    antecessor = 2*x-1;
    sucessor = 3*x+1;
    total = sucessor+antecessor;
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d. \n", total);

return 0;
}
*/

/* Exercicio 33
int main (){
    int lado, area;
    printf("Qual o tamanho do lado do quadrado? \n");
    scanf("%d", &lado);
    area = lado*lado;
    printf("A área do quadrado eh: %d.", area);
    return 0;
}
*/

/* Exercicio 34
int main (){
    float raio, area;
    printf("Qual o tamanho do raio do circulo? \n");
    scanf("%f", &raio);
    area = 3.141592*(raio*raio);
    printf("A área do circulo eh: %.2f.", area);
    return 0;
}
*/

/* Exercicio 35
int main (){
    int a,b;
    int soma;
    float hipotenusa;
    printf("Digite o valor dos catetos separados por espaco: \n");
    scanf("%d %d", &a, &b);

    soma = (a*a)+(b*b);
    hipotenusa = sqrt(soma);
    printf("O valor da hipotenusa com base nos catetos eh: %.2f", hipotenusa);

return 0;
}
*/

/* Exercicio 36
int main (){
    float altura, raio, volume;
    printf("Qual a altura e o raio, separados por espacos, do cilindro regular? \n");
    scanf("%f %f", &altura, &raio);
    volume = 3.141592*(raio*raio)*altura;
    printf("O volume do cilindro circular eh: %.2f.", volume);

return 0;

}
*/

/* Exercicio 37
int main (){
    float valor, desconto;
    printf("Insira o valor de um produto: \n");
    scanf("%f", &valor);
    volume = 3.141592*(raio*raio)*altura;
    printf("O volume do cilindro circular eh: %.2f.", volume);

return 0;

}
*/

/* Exercicio 38
int main (){
    float salario, novo_salario;
    printf("Insira o salario do funcionario: \n");
    scanf("%f", &salario);
    novo_salario= salario*1.25;
    printf("O novo salario com aumento de 25 porcento eh: %f.", novo_salario);

return 0;
}
*/

/* Exercicio 39
int main(){
    float quantiatotal, primeiro, segundo, terceiro;
    quantiatotal = 780,000.00;
    primeiro = quantiatotal*0.46;
    segundo = quantiatotal*0.32;
    terceiro = quantiatotal-primeiro-segundo;

    printf("Jogador 1: R$ %.3Lf \n", primeiro);
    printf("Jogador 2: R$ %.3Lf \n", segundo);
    printf("Jogador 3: R$ %.3Lf \n", terceiro);
return 0;
}
*/

/* Exercicio 40
int main (){
    float valordia, dias, totalpago;
    printf("Quantos dias o encanador trabalhou? \n");
    scanf("%f", &dias);
    valordia = 30;
    totalpago = (valordia*dias)*0.92;
    printf("A quantia liquida a ser paga eh: R$ %f", totalpago);

return 0;
}
*/

/* Exercicio 41
int main (){
    float valorhora, hora, totalpago;
    printf("Qual o valor da hora de trabalho e o numero de horas trabalhadas por espaco: \n");
    scanf("%f %f", &valorhora, &hora);
    totalpago = (valorhora*hora)*1.1;
    printf("O valor a ser pago ao funcionario eh: R$ %.2f", totalpago);

return 0;
}
*/

/* Exercicio 42
int main (){
    float salariobase, salariogratificacao, salarioareceber;
    printf("Qual o salario base do funcionario? \n");
    scanf("%f", &salariobase);
    salariogratificacao = salariobase*1.05;
    salarioareceber = salariogratificacao*0.93;

    printf("O salario a receber eh: R$ %.2f", salarioareceber);
return 0;
}
*/

/* Exercicio 43
int main (){
    float valorinicial, valorcomdesconto, valorparcela, comissaovista, comissaoparcelada;
    printf("Qual o valor total? \n");
    scanf("%f", &valorinicial);
    valorcomdesconto = valorinicial*0.9;
    valorparcela = valorinicial*0.03;
    comissaovista = valorcomdesconto*0.05;
    comissaoparcelada = valorinicial*0.05;

    printf("Total a pagar com desconto de 10 porcento: R$ %.2Lf \n", valorcomdesconto);
    printf("O valor de cada parcela eh: R$ %.2Lf \n", valorparcela);
    printf("A comissao do vendedor da venda a vista eh: R$ %.2Lf \n", comissaovista);
    printf("A comissao do vendedor da venda parcelada eh: R$ %.2Lf \n", comissaoparcelada);

return 0;
}
*/

/* Exercicio 44
int main (){
    float alturadegrau, alturadesejada;
    int degrausnecessarios;
    printf("Qual a altura do degrau da escada e a altura que deseja alcancar, separados por espacos: \n");
    scanf("%f %f", &alturadegrau, &alturadesejada);
    degrausnecessarios = alturadesejada/alturadegrau;

    printf("Sera necessario %d degraus para atingir a altura de %.2f.", degrausnecessarios, alturadesejada);

return 0;
}
*/

/* Exercicio 45
int main (){
    char maiuscula;
    int minuscula;
    printf("Digite uma letra maiuscula: \n");
    scanf("%c", &maiuscula);
    minuscula = maiuscula+32;

    printf("A letra digitada convertida para minusculo eh: %c", minuscula);

return 0;
}
*/

/* Exercicio 46
int main (){
    int x, reverso;
    printf("Digite um numero inteiro positivo de tres digitos: \n");
    scanf("%d", &x);
    while (x != 0){
        
    }

return 0;
}
*/

/* Exercicio 47
int main (){
    int x;
    printf("Digite um numero de 4 digitos");
    scanf("%d", &x);
    
    printf("")
    
    return 0;
}
*/ 

/* Exercicio 48 
int main (){
    float segundos, horas, minutos;
    printf("Segundos: \n");
    scanf("%f", &segundos);
    
    horas = segundos/3600;
    minutos = segundos/60;
    
    printf("Horas = %.4f \n", horas);
    printf("Minutos = %.4f", minutos);
return 0;
}
*/

// Exercicio 49
    
