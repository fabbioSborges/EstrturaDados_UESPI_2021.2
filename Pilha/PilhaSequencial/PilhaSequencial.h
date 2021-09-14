#define MAX 5

typedef struct{
  int vetor[MAX];
  int quant;
}TPilhaSequencial;


TPilhaSequencial criarPilhaSequencial();
int adicionar(TPilhaSequencial *pilha, int numero);
int tamanhoPilha(TPilhaSequencial *pilha);
int remover(TPilhaSequencial *pilha);
int getTopo(TPilhaSequencial *pilha);