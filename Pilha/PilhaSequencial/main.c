#include <stdio.h>
#include "PilhaSequencial.h"


int main(void) {
  TPilhaSequencial pilha1 = criarPilhaSequencial();

  adicionar(&pilha1, 3);
  adicionar(&pilha1, 4);
  adicionar(&pilha1, 5);
  adicionar(&pilha1, 6);

  printf("Quantidade de elementos: %d\n", tamanhoPilha(&pilha1));
  printf("O topo é igual: %d\n", getTopo(&pilha1));
  remover(&pilha1);
  printf("O topo é igual: %d\n", getTopo(&pilha1));
  remover(&pilha1);
  printf("O topo é igual: %d\n", getTopo(&pilha1));

  printf("Fim");
  return 0;
}