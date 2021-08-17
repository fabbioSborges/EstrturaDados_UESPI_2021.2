#include <stdio.h>
#include "ListaDuplamenteEncadeada.h"

int main(void) {
  int vet[10]; 
  TListaDuplamenteEncadeada *lista1 = criarLista();

/*   inserirInicio(lista1, 87);
  inserirInicio(lista1, 88);
  inserirInicio(lista1, 89);
  inserirInicio(lista1, 90); */

  inserirFim(lista1, 87);
  inserirFim(lista1, 88);
  inserirFim(lista1, 89);
  inserirFim(lista1, 90);

  imprimirLista(lista1);

  removerInicio(lista1);

  removerFinal(lista1);

  imprimirLista(lista1);


  printf("Final");
  return 0;
}