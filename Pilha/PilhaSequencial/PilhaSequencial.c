#include "PilhaSequencial.h"
#include <stdio.h>

TPilhaSequencial criarPilhaSequencial(){
  TPilhaSequencial novaPilha;
  novaPilha.quant = 0;
  return novaPilha;
}

int getTopo(TPilhaSequencial *pilha){
  
  return pilha->vetor[--(pilha->quant)];
}

int adicionar(TPilhaSequencial *pilha, int numero){
  if(pilha->quant < MAX){
    pilha->vetor[pilha->quant] = numero;
    pilha->quant++;
    return 1;
  }else{
    return 0;
  }
}

int tamanhoPilha(TPilhaSequencial *pilha){
  return pilha->quant;
}

int remover(TPilhaSequencial *pilha){
  if(pilha->quant > 0){
    pilha--;
    return 1;
  }else{
    return 0;
  }
}

