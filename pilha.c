#include "pilha.h"
#include <stdlib.h>

typedef struct pilha_no_t {
	int data;
	struct pilha_no_t* prox;
}pilha_no_t;

typedef pilha_no_t* pilha_iterador;

typedef struct pilha_t {
	pilha_no_t* topo;
	int size;
}pilha_t;


void pilha_inicia(Pilha* pilha) {
	(*pilha) = malloc(sizeof(pilha_t));
	(*pilha) -> topo = NULL; 
	(*pilha) -> size = 0;
}

void pilha_deleta(Pilha* pilha) {
	while(!pilha_vazia(*pilha)) {
		pilha_desempilha(*pilha);
	}
	free(*pilha);
	(*pilha) = NULL;
}

int pilha_vazia(Pilha pilha) {
	return (pilha->size == 0 ? 1 : 0);
}

void pilha_empilha(pilha_t* pilha, int val) {
	pilha_no_t *no = malloc(sizeof(pilha_no_t));
	no -> data = val;
	no -> prox = pilha->topo;
	pilha->topo = no;
	pilha->size++;
}

void pilha_desempilha(Pilha pilha) {
	if(!pilha_vazia(pilha)){
		pilha_iterador it = pilha->topo;
		pilha->topo = pilha->topo->prox;
		free(it);
		pilha->size--;
	}
}

int pilha_topo(Pilha pilha) {
	return (pilha->topo->data);
}