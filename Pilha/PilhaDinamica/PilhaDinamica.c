
#include "PilhaDinamica.h" 
#include <stdlib.h>
#include <stdio.h>

TPilhaDinamica* criarPilha(){
  TPilhaDinamica *novaPilha = (TPilhaDinamica*) malloc(sizeof(TPilhaDinamica));
  novaPilha->quantidade = 0;
  novaPilha->topo = NULL;
  return novaPilha;
}


int inserir(TPilhaDinamica *pilha, int numero){
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  if(pilha->topo == NULL){ //verificar se a lista é vazia
    novoNo->info = numero;
    pilha->topo = novoNo;
    novoNo->prox = NULL;
    return 1;
  }else{
    novoNo->info = numero;
    novoNo->prox = pilha->topo;
    pilha->topo = novoNo;
    return 1;
  }
  return 0;
}

int remover(TPilhaDinamica *pilha){
  TNo *remove = pilha->topo; //armazenando o endereço do nó que eu quero remover;
  pilha->topo = remove->prox; 
  free(remove); // liberando o espaço de memoria que armazena os dados do nó que quero remover
  return 1;
}


int getTopo(TPilhaDinamica *pilha){
  return pilha->topo->info;
}