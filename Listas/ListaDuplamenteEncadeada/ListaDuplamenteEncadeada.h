typedef struct no{
  int info;
  struct no *prox;
  struct no *ant;
}TNo;

typedef struct{
  TNo *prim;
  int quantidade;
}TListaDuplamenteEncadeada;


TListaDuplamenteEncadeada* criarLista();
int inserirInicio(TListaDuplamenteEncadeada *lista, int numero);
void imprimirLista(TListaDuplamenteEncadeada *lista);
int inserirFim(TListaDuplamenteEncadeada *lista, int numero);
int removerInicio(TListaDuplamenteEncadeada *lista);
int removerFinal(TListaDuplamenteEncadeada *lista);
int getIndex(TListaDuplamenteEncadeada *lista, int index);
/*int adicionarFim(TListaSequencial *lista, int numero);
void imprimirLista(TListaSequencial *lista);
int adicionar(TListaSequencial *lista, int numero, int posicao);
void imprimirLista(TListaSequencial *lista);
void remover(TListaSequencial *lista, int posicao);*/