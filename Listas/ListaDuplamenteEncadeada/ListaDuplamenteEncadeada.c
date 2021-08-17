
#include "ListaDuplamenteEncadeada.h" 
#include <stdlib.h>
#include <stdio.h>

TListaDuplamenteEncadeada* criarLista(){
  TListaDuplamenteEncadeada *novaLIsta = (TListaDuplamenteEncadeada*) malloc(sizeof(TListaDuplamenteEncadeada));
  novaLIsta->quantidade = 0;
  novaLIsta->prim = NULL;
  return novaLIsta;
}


 int inserirInicio(TListaDuplamenteEncadeada *lista, int numero){
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  novoNo->info = numero;
  if(lista->prim == NULL){ //verificar se a lista é vazia
    lista->prim = novoNo;
    novoNo->prox = NULL;
    novoNo->ant = NULL;
    return 1;
  }else{
    lista->prim->ant = novoNo;
    novoNo->prox = lista->prim;
    novoNo->ant = NULL;
    lista->prim =  novoNo;
    return 1;
  }
  return 0;
}

void imprimirLista(TListaDuplamenteEncadeada *lista){
  TNo *aux = lista->prim;
  int i = 0;
  while(aux != NULL){
    printf("Elemento de indice %d: %d\n", i, aux->info);
    i++;
    aux = aux->prox;
  }
}



int inserirFim(TListaDuplamenteEncadeada *lista, int numero){
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  novoNo->info = numero;
  if(lista->prim == NULL){ //verificar se a lista é vazia
    lista->prim = novoNo;
    novoNo->prox = NULL;
    novoNo->ant = NULL;
    return 1;
  }else{
    TNo *aux = lista->prim;
    while(aux->prox != NULL){
      aux = aux->prox;
    } 
    novoNo->prox = aux->prox;
    aux->prox = novoNo;
    novoNo->ant = aux;
    return 1;
  }
  return 0;
}


int getIndex(TListaDuplamenteEncadeada *lista, int index){
  TNo *aux = lista->prim;
  int i = 0;
  while( (aux->prox != NULL) && (i != index)){
    aux = aux->prox;
    i++;
  }

  if(aux == NULL){
    printf("Indice não encontrado ");
    return 0;
  }else{
    printf("Elemento encontrado ");
    return aux->info;
  }
}


int removerInicio(TListaDuplamenteEncadeada *lista){
  TNo *remove = lista->prim; //armazenando o endereço do nó que eu quero remover;
  lista->prim = remove->prox;

  if(lista->prim != NULL){
    lista->prim->ant = NULL;
  }
  free(remove); // liberando o espaço de memoria que armazena os dados do nó que quero remover
  return 1;
}


int removerFinal(TListaDuplamenteEncadeada *lista){
  TNo *remove = lista->prim;
  while(remove->prox != NULL){
    remove = remove->prox;
  }
  if(remove->ant == NULL){///remove o primeiro nó​
    lista->prim = remove->prox;
  }else{
    remove->ant->prox = remove->prox;
  }
  free(remove);
  
  return 1;
} 