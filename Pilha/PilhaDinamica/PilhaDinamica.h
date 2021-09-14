typedef struct no{
  int info;
  struct no *prox;
}TNo;

typedef struct{
  TNo *topo;
  int quantidade;
}TPilhaDinamica;


TPilhaDinamica* criarPilha();
int inserir(TPilhaDinamica *pilha, int numero);
int remover(TPilhaDinamica *pilha);
int getTopo(TPilhaDinamica *pilha);
void liberaPilha(TPilhaDinamica *pilha);