#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha_t* Pilha;

void pilha_inicia(Pilha* pilha);
void pilha_deleta(Pilha* pilha);
int pilha_vazia(Pilha pilha);
void pilha_empilha(Pilha pilha, int val);
void pilha_desempilha(Pilha pilha);
int pilha_topo(Pilha pilha);

#endif