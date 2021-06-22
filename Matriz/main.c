#include <stdio.h>

int main(void) {
  int matriz[2][3] = {{1,2,3},{10,11,12}}; 
  matriz[0][0] = 19; 
  matriz[0][1] = 18; 
  matriz[0][2] = 15;

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("matriz[%d][%d]: %d\n", i,j, matriz[i][j]);
    }
  }

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("endereço posição matriz[%d][%d]: %p\n", i,j, &matriz[i][j]);
    }
  }

  int vet[10000];
  
  printf("posiçãão 786 = %d", vet[10087]);
  return 0;
}