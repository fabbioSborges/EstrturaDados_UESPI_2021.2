#include <stdio.h>
#include "listaSequencial.h"


int main(void) {
  TListaSequencial lista1 = criarListaSequencial();
  int numero; 
  printf("Posição do primerio elemento: %d\n", lista1.prim);
  printf("Posição do ultimo elemento: %d\n", lista1.fim);
  printf("Quantidade de elemento: %d\n", lista1.tamanho);

  printf("Digite o número que você deseja armazenar na lista: ");
  scanf("%d", &numero);
  if( adicionarFim(&lista1, numero) == 1){
    printf("Elemento adicionado com sucesso\n");
  }else{
    printf("Não foi possivel adicionar\n");
  }
    
  printf("Digite o número que você deseja armazenar na lista: ");
  scanf("%d", &numero);
  if( adicionarFim(&lista1, numero) == 1){
    printf("Elemento adicionado com sucesso\n");
  }else{
    printf("Não foi possivel adicionar\n");
  }

  printf("Digite o número que você deseja armazenar na lista: ");
  scanf("%d", &numero);
  if( adicionarFim(&lista1, numero) == 1){
    printf("Elemento adicionado com sucesso\n");
  }else{
    printf("Não foi possivel adicionar\n");
  }

  printf("Digite o número que você deseja armazenar na lista: ");
  scanf("%d", &numero);
  if( adicionarFim(&lista1, numero) == 1){
    printf("Elemento adicionado com sucesso\n");
  }else{
    printf("Não foi possivel adicionar\n");
  }


  imprimirLista(&lista1);

  remover(&lista1, 1);

  imprimirLista(&lista1);

  return 0;
}