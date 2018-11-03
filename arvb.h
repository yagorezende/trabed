typedef struct arvb{
  int nchaves, folha, *chave;
  struct arvb **filho;
}TAB;

TAB *inicializa();
TAB* cria(int t);
TAB* libera(TAB* a);
TAB* busca(TAB* a);
TAB* divisao(TAB* x, int i, TAB* y, int t);
TAB* insere_nao_completo(TAB* a, int chave, int t);
TAB* insere(TAB* a, int chave, int t);
TAB* remover(TAB* a, int chave, int t);
TAB* retira(TAB* a, int chave, int t);
void imprime(TAB* a);
