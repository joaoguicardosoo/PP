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
