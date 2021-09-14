#include <stdio.h>
#include "PilhaDinamica.h"


int main(void) {
  TPilhaDinamica *pilha1 = criarPilha();

  inserir(pilha1, 3);
  inserir(pilha1, 4);
  inserir(pilha1, 5);
  inserir(pilha1, 6);

  printf("O topo é igual: %d\n", getTopo(pilha1));
  remover(pilha1);
  printf("O topo é igual: %d\n", getTopo(pilha1));
  remover(pilha1);
  printf("O topo é igual: %d\n", getTopo(pilha1));

  printf("Fim");
  return 0;
}

void liberaPilha(TPilhaDinamica *pilha){
  if(pilha != NULL){
  TNo *aux;
  while(pilha->topo != NULL){

  aux = pilha->topo;
  pilha->topo = pilha->topo->prox;
  free(aux);
}

free(pilha);​

}​

}​