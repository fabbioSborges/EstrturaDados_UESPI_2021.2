
#include "ListaEncadeada.h" 
#include <stdlib.h>
#include <stdio.h>

TListaEncadeada* criarLista(){
  TListaEncadeada *novaLIsta = (TListaEncadeada*) malloc(sizeof(TListaEncadeada));
  novaLIsta->quantidade = 0;
  novaLIsta->prim = NULL;
  return novaLIsta;
}


int inserirInicio(TListaEncadeada *lista, int numero){
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  if(lista->prim == NULL){ //verificar se a lista é vazia
    novoNo->info = numero;
    lista->prim = novoNo;
    novoNo->prox = NULL;
    return 1;
  }else{
    novoNo->info = numero;
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
    return 1;
  }
  return 0;
}

void imprimirLista(TListaEncadeada *lista){
  TNo *aux = lista->prim;
  int i = 0;
  while(aux != NULL){
    printf("Elemento de indice %d: %d\n", i, aux->info);
    i++;
    aux = aux->prox;
  }
}


int inserirFim(TListaEncadeada *lista, int numero){
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  if(lista->prim == NULL){ //verificar se a lista é vazia
    novoNo->info = numero;
    lista->prim = novoNo;
    novoNo->prox = NULL;
    printf("Lista Vazia");
    return 1;
  }else{
    TNo *aux = lista->prim;
    while(aux->prox != NULL){
      aux = aux->prox;
    } 
    aux->prox = novoNo;
    novoNo->prox = NULL;
    return 1;
  }
  return 0;
}