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
int main(){
    aluno alunos[5];
    int i;
    for (i=0; i<=4; i++){
        fflush(stdin);
        printf("Nome: ");
        gets(alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("Curso: ");
        gets(alunos[i].curso);
    }
        printf("%s \n", alunos[0].nome);
        printf("%d \n", alunos[0].matricula);
        printf("%s \n \n", alunos[0].curso);

        printf("%s \n", alunos[1].nome);
        printf("%d \n", alunos[1].matricula);
        printf("%s \n \n", alunos[1].curso);

        printf("%s \n", alunos[2].nome);
        printf("%d \n", alunos[2].matricula);
        printf("%s \n \n", alunos[2].curso);

        printf("%s \n", alunos[3].nome);
        printf("%d \n", alunos[3].matricula);
        printf("%s \n \n", alunos[3].curso);

        printf("%s \n", alunos[4].nome);
        printf("%d \n", alunos[4].matricula);
        printf("%s \n \n", alunos[4].curso);

        printf("%s \n", alunos[5].nome);
        printf("%d \n", alunos[5].matricula);
        printf("%s \n", alunos[5].curso);

    system("pause");

return 0;
}
