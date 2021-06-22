#include <stdio.h>

int main(void) {
  double vet[10] = {0,1,2,3,4,5,6,7,8,9}; 
  vet[0] = 19; 
  vet[1] = 18; 
  vet[2] = 15;

  for(int i = 0; i < 10; i++){
    printf("Vet[%d]: %lf\n", i, vet[i]);
  }

  printf("Endereço da posiçãão 0 é: %p \n", &vet[0]);

  printf("Endereço da posiçãão 1 é: %p \n", &vet[1]);

  printf("Endereço da posiçãão 1 é: %p \n", &vet[2]);

  printf("Endereço de inicio do vetor: %p\n", vet);

  printf("Endereço da posição 0 +1 é: %p \n", (&vet[0]+1));

  printf("conteúdo da posiçao 1: %lf \n", *(&vet[0]+1));

  return 0;
}