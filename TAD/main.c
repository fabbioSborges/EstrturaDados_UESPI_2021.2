/*Escreva  uma  especificação  de  tipos  abstratos  de  dados  (TAD)  para os  números complexos, 
a + bi, onde 
  abs(a + bi) => sqrt(a^2 + b^2)
  (a + bi) + (c + di) => (a + c) + (b + d)i
  (a + bi)  *  (c  + di)  =>  (a  * c  – b * d)  +  (a * d  + b  * c)i  
  –(a  + bi) => (-a)  +  (-b)i.  
*/

#include <stdio.h>
#include "numeroComplexo.h"

int main(void) {
  float parte_real, parte_imaginaria;
  printf("Digite o valor da parte real e imaginaria: ");
  scanf("%f %f", &parte_real, &parte_imaginaria);
  TComplexo numero1 = criarNumeroComplexo(parte_real, parte_imaginaria);
  imprimeComplexo(&numero1);
  
  printf("Digite o valor da parte real e imaginaria do segundo numero: ");
  scanf("%f %f", &parte_real, &parte_imaginaria);
  TComplexo numero2 = criarNumeroComplexo(parte_real, parte_imaginaria);
  imprimeComplexo(&numero2);

  printf("Absoluto\n\n");
  printf("O valor absoluto do numero 1: %f\n\n", absComplexo(numero1));
  printf("O valor absoluto do numero 2: %f\n\n", absComplexo(numero2));
  
  printf("Soma\n\n");
  TComplexo numero3 = soma(numero1, numero2);
  imprimeComplexo(&numero3);
  
  printf("Multiplicação\n\n");
  numero3 = multiplicacao(numero1, numero2);
  imprimeComplexo(&numero3);

  printf("Negacao\n\n");
  numero3 = negacao(numero1);
  imprimeComplexo(&numero3);

  return 0;
}