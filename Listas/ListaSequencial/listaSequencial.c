#include "listaSequencial.h"
#include <stdio.h>

TListaSequencial criarListaSequencial(){
  TListaSequencial novaLista;
  novaLista.prim = 0;
  novaLista.fim = 0;
  novaLista.tamanho = 0;
  return novaLista;
}

int adicionarFim(TListaSequencial *lista, int numero){
  if(lista->tamanho < MAX){
    lista->vetor[lista->fim] = numero;
    lista->tamanho++;
    lista->fim++;
    return 1;
  }else{
    return 0;
  }
}

int adicionar(TListaSequencial *lista, int numero, int posicao){
  for(int i = lista->fim; i > posicao; i--){
    lista->vetor[i] = lista->vetor[i-1];
  } 
  lista->vetor[posicao] = numero;
  lista->tamanho++;
  lista->fim++;
  return 1;
}


void imprimirLista(TListaSequencial *lista){
  for(int i = lista->prim; i < lista->fim; i++ ){
    printf("Elemento posição %d: %d\n", i, lista->vetor[i]);
  }
}

void remover(TListaSequencial *lista, int posicao){
  for(int i = posicao; i < lista->fim; i++){
    lista->vetor[i] = lista->vetor[i+1];
  }
  lista->tamanho--;
  lista->fim--;
}