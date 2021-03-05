typedef struct No TNo;

int tamanho(TNo *e);
void inserir(TNo *e, int v);
void remover(TNo *e, int v);
TNo* buscar(TNo *e, int v);
void exibe(TNo *e);
void mostraNo(TNo *e);
void inserirInicio(TNo *e, int v);
TNo* removerInicio(TNo *e);
//int remover_ordenada_descrescente(TNo* lista, int valor_remover);
void remove_ordenada_decrescente(TNo *e, int x)
