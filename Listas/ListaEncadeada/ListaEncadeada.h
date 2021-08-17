typedef struct no{
  int info;
  struct no *prox;
}TNo;

typedef struct{
  TNo *prim;
  int quantidade;
}TListaEncadeada;


TListaEncadeada* criarLista();
int inserirInicio(TListaEncadeada *lista, int numero);
void imprimirLista(TListaEncadeada *lista);
int inserirFim(TListaEncadeada *lista, int numero);
int removerInicio(TListaEncadeada *lista);
int removerFinal(TListaEncadeada *lista);
/*int adicionarFim(TListaSequencial *lista, int numero);
void imprimirLista(TListaSequencial *lista);
int adicionar(TListaSequencial *lista, int numero, int posicao);
void imprimirLista(TListaSequencial *lista);
void remover(TListaSequencial *lista, int posicao);*/