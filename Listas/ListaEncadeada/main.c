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

  imprimirLista(lista1);
  printf("deu certo");
  return 0;
}