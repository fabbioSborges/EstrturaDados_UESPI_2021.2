#include <stdio.h>
#include "ListaEncadeada.h"

int main(void) {
  TListaEncadeada *lista1 = criarLista();
  
  TListaEncadeada *lista2 = criarLista();

  //for(int i = 1; i < 9; i++){
  //  inserirFim(lista1, i);
  //}
  inserirFim(lista1, 1);
  inserirFim(lista1, 2);
  inserirFim(lista1, 3);
  inserirFim(lista1, 4);

  TNo *primeiro = lista1->prim;

  imprimirLista(lista1);

  
  removerFinal(lista1);
  printf("Endereço do priemiro elemento %d\n\n", primeiro->info);
  imprimirLista(lista1);
  return 0;
}