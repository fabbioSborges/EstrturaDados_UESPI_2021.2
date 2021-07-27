typedef struct{
  float parte_real;
  float parte_imaginaria;
}TComplexo;

TComplexo criarNumeroComplexo(float parte_real, float parte_imaginaria);
void imprimeComplexo(TComplexo *numeroComplexo);
float absComplexo(TComplexo numeroComplexo);
TComplexo soma(TComplexo numeroComplexo1, TComplexo numeroComplexo2);
TComplexo multiplicacao(TComplexo numeroComplexo1, TComplexo numeroComplexo2);
TComplexo negacao(TComplexo numeroComplexo1);