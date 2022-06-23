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
    horario hr;
    hr.hora = 2;
    printf("Dia: %d \n", dt.dia);
    printf("Hora: %d", hr.hora);

}
*/

// Exercicio 2
    struct aluno{
        char nome[30];
        int matricula;
        char curso[30];
    };
    typedef struct aluno aluno;
void main(){
    aluno alunos[5];
    int i;
    for (i=0; i<=4; i++){
        gets(alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        gets(alunos[i].curso);
        printf("%c", alunos[i].nome);
    }



}
