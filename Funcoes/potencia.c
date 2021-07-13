#include <stdio.h>


float potencia(float base, int expoente);

int main() {
  float x,y;
  int a, b;
  printf("Digite o valor de x e y nesse formato (x,y): ");
  scanf("%f,%f", &x, &y);

  
  printf("Digite o valor de a e b nesse formato (a,b): ");
  scanf("%d,%d", &a, &b);

  printf("O resultado é %f", potencia(x,a)+potencia(y,b)+potencia(x-y,a+b));
  return 3;
}

float potencia(float base, int expoente){
  float pot = 1;
  int cont = 0;
  while(cont < expoente){
    //pot = pot * base;
    pot *= base;
    cont++;
  }
  return pot;
}

