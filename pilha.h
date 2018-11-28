#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha_no_t {
	int data;
	struct pilha_no_t* prox;
}pilha_no_t;

typedef pilha_no_t* pilha_iterador;

typedef struct pilha_t {
	pilha_no_t* topo;
	int size;
}pilha_t;

void pilha_inicia(pilha_t** pilha);
void pilha_deleta(pilha_t** pilha);
int pilha_vazia(pilha_t* pilha);
void pilha_empilha(pilha_t* pilha, int val);
void pilha_desempilha(pilha_t* pilha);
int pilha_topo(pilha_t* pilha);

#endif