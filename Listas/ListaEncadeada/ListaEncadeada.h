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
/*int adicionarFim(TListaSequencial *lista, int numero);
void imprimirLista(TListaSequencial *lista);
int adicionar(TListaSequencial *lista, int numero, int posicao);
void imprimirLista(TListaSequencial *lista);
void remover(TListaSequencial *lista, int posicao);*/