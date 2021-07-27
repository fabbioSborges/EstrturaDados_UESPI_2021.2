#include "numeroComplexo.h"
#include <stdio.h>
#include <math.h>

TComplexo criarNumeroComplexo(float parte_real, float parte_imaginaria){
  TComplexo novoComplexo;
  novoComplexo.parte_real = parte_real;
  novoComplexo.parte_imaginaria = parte_imaginaria;

  return novoComplexo;
}

void imprimeComplexo(TComplexo *numeroComplexo){
  printf("O Número complexo é: %.3f + %.3fi\n\n", numeroComplexo->parte_real, numeroComplexo->parte_imaginaria);
}

float absComplexo(TComplexo numeroComplexo){
  //abs(a + bi) => sqrt(a^2 + b^2)
  return sqrt((pow(numeroComplexo.parte_real,2) + pow(numeroComplexo.parte_imaginaria,2)));
}

TComplexo soma(TComplexo numeroComplexo1, TComplexo numeroComplexo2){
  //(a + bi) + (c + di) => (a + c) + (b + d)i
  TComplexo resultado;
  resultado.parte_real = numeroComplexo1.parte_real + numeroComplexo2.parte_real;
  resultado.parte_imaginaria = numeroComplexo1.parte_imaginaria + numeroComplexo2.parte_imaginaria;
  return resultado;
}

TComplexo multiplicacao(TComplexo numeroComplexo1, TComplexo numeroComplexo2){
  //(a + bi)  *  (c  + di)  =>  (a  * c  – b * d)  +  (a * d  + b  * c)i  
  TComplexo resultado;
  resultado.parte_real = numeroComplexo1.parte_real * numeroComplexo2.parte_real - 
                         numeroComplexo1.parte_imaginaria * numeroComplexo2.parte_imaginaria;
  resultado.parte_imaginaria = numeroComplexo1.parte_real * numeroComplexo2.parte_imaginaria + 
                                numeroComplexo1.parte_imaginaria * numeroComplexo2.parte_real;;
  return resultado;
}

TComplexo negacao(TComplexo numeroComplexo1){
  //–(a  + bi) => (-a)  +  (-b)i.  
  TComplexo resultado;
  resultado.parte_real = -numeroComplexo1.parte_real;
  resultado.parte_imaginaria = -numeroComplexo1.parte_imaginaria;
  return resultado;
}