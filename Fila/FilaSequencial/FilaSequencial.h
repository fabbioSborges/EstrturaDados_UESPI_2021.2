#define MAX 5

typedef struct{
  int prim;
  int fim;
  int vetor[MAX];
  int tamanho;
}TFilaSequencial;


TFilaSequencial criarFilaSequencial();
int adicionar(TFilaSequencial *fila, int numero);
int remover(TFilaSequencial *fila);
void imprimirTodosElementos(TFilaSequencial *fila);