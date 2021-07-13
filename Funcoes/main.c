#include <stdio.h>


//<tipo de retorno> <nome da função> (<lista de parametros de entrada>)
//cabeçalho da função
int soma(int a, int b);
int subtracao(int a, int b);

int main() {
  int a = 9;
  int b = 5;
  
  int resultado1 = soma(a,b);
  int resultado2 = subtracao(a,b);

  printf("O valor da soma é %d\n ", resultado1);
  printf("O valor de a é %d\n ", a);
  printf("O valor da subtracao é %d\n", resultado2);
  return 0;
}

int soma(int a, int b){
  a = 98;
  b = 100;
  return a + b;
}

int subtracao(int a, int b){
  b = 9;
  return a - b;
}
