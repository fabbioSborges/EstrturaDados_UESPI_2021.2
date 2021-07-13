#include <stdio.h>

int f (int x, int *y);

int main(void) {
  int a = 5,b[3] = {1,2,3},c;
  printf("O endereço de b é %p\n\n", &b);
  c = f(a, b);
  //printf("O valor de a é %d,O valor de b é %d,O valor de c é %d", a,b,c);
  for(int i = 0; i< 3; i++){
    printf("%d\n", b[i]);
  }
  return 0;
}

int f (int x, int y[]){
  printf("O endereço que y armazena é %p\n\n", y);
  for(int i = 0; i< 3; i++){
    printf("%d\n", y[i]);
    y[i] = 9;
  }
  //*y = x +3;
  //x = 90;
  return 4;
}