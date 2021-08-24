#include "FilaSequencial.h"
#include <stdio.h>

TFilaSequencial criarFilaSequencial(){
  TFilaSequencial novaFila;
  novaFila.prim = 0;
  novaFila.fim = 0;
  novaFila.tamanho = 0;
  return novaFila;
}

int adicionar(TFilaSequencial *fila, int numero){
  if(fila->tamanho < MAX){
    fila->vetor[fila->fim] = numero;
    fila->fim++;
    fila->tamanho++;
    if(fila->fim >= MAX){
      fila->fim = 0;
    }
    return 1;
  }else{
    return 0;
  }
}

int remover(TFilaSequencial *fila){
  if(fila->tamanho > 0){
    fila->prim++;
    fila->tamanho--;
    if(fila->prim >= MAX){
      fila->prim = 0;
    }
    return 1;
  }else{
    return 0;
  }
}

void imprimirTodosElementos(TFilaSequencial *fila){
 

  for(int i = 0; i < MAX ; i++){
    if(i == fila->prim){
      printf("p ");
    }
    if(i == fila->fim){
      printf("f ");
    }
    printf(" [%d] ", i);
  }
  printf("\n\n");
  int i = 0;
  int aux = fila->prim;
  while(i < fila->tamanho){
    printf("  %d  ", fila->vetor[aux]);
    aux++;
    if(aux >= MAX){
      aux = 0;
    }
    i++;
  }
  printf("\n\n");
}