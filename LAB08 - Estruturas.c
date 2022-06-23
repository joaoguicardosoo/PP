#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/* Exercicio 1
    struct horario{
        int hora;
        int minutos;
        int segundos;
    };
    typedef struct horario horario;

    struct data{
        int dia;
        int mes;
        int ano;
    };
    typedef struct data data;

    struct compromisso{
        data dt;
        horario hr;
        char texto[300];
    };
    typedef struct compromisso compromisso;

    

void main (){            // Atribuindo um dia a struct "dt" e imprimindo
    data dt;
    dt.dia = 23;
    printf("%d", dt.dia);


}
*/


// Exercicio 2
    struct aluno{
        char nome[30];
        int matricula;
        char curso;

    };
