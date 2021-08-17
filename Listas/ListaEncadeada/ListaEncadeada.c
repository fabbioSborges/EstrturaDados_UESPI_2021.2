
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
  novoNo->prox = NULL;
  novoNo->info = numero;
  if(lista->prim == NULL){ //verificar se a lista é vazia
    lista->prim = novoNo;
    printf("Lista Vazia\n");
    return 1;
  }else{
    TNo *aux = lista->prim;
    while(aux->prox != NULL){
      aux = aux->prox;
    } 
    aux->prox = novoNo;
    return 1;
  }
  return 0;
}


int removerInicio(TListaEncadeada *lista){
  TNo *remove = lista->prim; //armazenando o endereço do nó que eu quero remover;
  //lista->prim = lista->prim->prox;
  lista->prim = remove->prox; 
  free(remove); // liberando o espaço de memoria que armazena os dados do nó que quero remover
  return 1;
}

int removerFinal(TListaEncadeada *lista){
  TNo *remove = lista->prim; 
  TNo *anterior;
  while(remove->prox != NULL){
    anterior = remove;
    remove = remove->prox;
  }
  anterior->prox = remove->prox;
  free(remove);


  
  return 1;
}