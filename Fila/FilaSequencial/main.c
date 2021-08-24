#include <stdio.h>
#include "FilaSequencial.h"

int main(void) {
  TFilaSequencial fila1 = criarFilaSequencial();
  imprimirTodosElementos(&fila1);
  adicionar(&fila1,8);
  imprimirTodosElementos(&fila1);
  adicionar(&fila1,2);
  imprimirTodosElementos(&fila1);
  adicionar(&fila1,3);
  imprimirTodosElementos(&fila1);
  adicionar(&fila1,4);
  imprimirTodosElementos(&fila1);
  adicionar(&fila1,5);
  imprimirTodosElementos(&fila1);


  if(!adicionar(&fila1,500)){
    printf("Não foi possivel adicionar!!\n\n");
  };
  imprimirTodosElementos(&fila1);



  remover(&fila1);
  remover(&fila1);
  imprimirTodosElementos(&fila1);

  adicionar(&fila1,500);
  imprimirTodosElementos(&fila1);

  return 0;
}