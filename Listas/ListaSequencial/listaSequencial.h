#define MAX 10000

typedef struct{
  int prim;
  int fim;
  int vetor[MAX];
  int tamanho;
}TListaSequencial;


TListaSequencial criarListaSequencial();
int adicionarFim(TListaSequencial *lista, int numero);
void imprimirLista(TListaSequencial *lista);
int adicionar(TListaSequencial *lista, int numero, int posicao);
void imprimirLista(TListaSequencial *lista);
void remover(TListaSequencial *lista, int posicao);