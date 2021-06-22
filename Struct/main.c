#include <stdio.h>

#define MAX 2

typedef struct{
  int dia;
  int mes;
  int ano;
}TData;

typedef struct{
  int mat;
  float notas[3];
  float media;
  TData dataMatricula;
}TAluno;


int main(void) {
  TAluno alunos[MAX]; 
  int i;

  for(i =0 ; i < MAX; i++){
    printf("Digite a matricula do aluno %d: ", i);
    scanf("%d", &alunos[i].mat);


    printf("Digite a data da matricula (formato XX/XX/XX) do aluno %d: ", i);
    scanf("%d/%d/%d", &alunos[i].dataMatricula.dia, &alunos[i].dataMatricula.mes, &alunos[i].dataMatricula.ano);

  
    printf("Digite a notas 1 do aluno %d: ", i);
    scanf("%f", &alunos[i].notas[0]);
    printf("Digite a notas 2 do aluno %d: ", i);
    scanf("%f",&alunos[i].notas[1]);
    printf("Digite a notas 3 do aluno %d: ", i);
    scanf("%f", &alunos[i].notas[2]);

    alunos[i].media = (alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2])/3;
  }

  for(i = 0; i < MAX; i++){
    printf("Aluno Matricula %d\n", alunos[i].mat);

    printf("Data Matricula %d/%d/%d \n",alunos[i].dataMatricula.dia, alunos[i].dataMatricula.mes, alunos[i].dataMatricula.ano);
    printf("Nota 1: %f\n", alunos[i].notas[0]);
    printf("Nota 2: %f\n", alunos[i].notas[1]);
    printf("Nota 3: %f\n", alunos[i].notas[2]);
    printf("Media: %f\n", alunos[i].media);

    printf("\n\n");
  }


  return 0;
}