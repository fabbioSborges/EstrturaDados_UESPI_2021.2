#include <stdio.h>

int main(void) {
  float numeroFloat = 10;
  int numero = 10;

  int *ponteiroInteiro;
  float *ponteiroFloat;

  printf("A variavel numero armazena o conteudo %d e está localizada o endereço %p\n\n", numero, &numero);

  ponteiroInteiro = &numero;

  printf("A variavel ponteiroInteiro armazena o conteudo %p e está localizada o endereço %p\n\n", ponteiroInteiro, &ponteiroInteiro);


  /*printf("A variavel numero armazena o conteudo %f e está localizada o endereço %p\n\n", numeroFloat, &numeroFloat);

  ponteiroFloat = &numeroFloat;

  printf("A variavel ponteiroInteiro armazena o conteudo %p e está localizada o endereço %p\n\n", ponteiroFloat, &ponteiroFloat);*/

  printf("O dado referenciado do ponteiro de inteiro: %d\n\n", *ponteiroInteiro);


  *ponteiroInteiro = 8;
  

  printf("O valor da variavel numero: %d", numero);

  printf("O valor de (ponteiroInteiro + 1): %p", (ponteiroInteiro - 1));


  int *p = &numero;
  
  printf("\n\n\nA variavel p armazena o conteudo %p e está localizada o endereço %p\n\n", p, &p);

  printf("%d\n\n", *p);

  //printf("p++ = %p\n\n", p++);

  //printf("p++ = %p\n\n", ++p);

  //printf("p = %p\n\n", p);
  //printf("(*p)++ = %d\n\n", (*p)++);
  //printf("(*p)++ = %d\n\n", ++(*p));
   *(p++);

  printf("*p = %d\n\n", *(p));

  int a[5] = {10,1,2,3,4};

  printf("o valor de a: %p\n\n", a);

  p = a;

  /*for (int i = 0; i<100; i++){
    printf("p[%d] = %d\n",i, *p);
    printf("Endereço de p[%d] = %p\n\n",i, p);
    p++;
  }*/

  int **pp = &p;

  printf("*pp = %p", *pp);

  return 0;
}