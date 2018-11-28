#include "pilha.h"
#include <stdlib.h>

void pilha_inicia(pilha_t** pilha) {
	(*pilha) = malloc(sizeof(pilha_t));
	(*pilha) -> topo = NULL; 
	(*pilha) -> size = 0;
}

void pilha_deleta(pilha_t** pilha) {
	while(!pilha_vazia(*pilha)) {
		pilha_desempilha(*pilha);
	}
	free(*pilha);
	(*pilha) = NULL;
}

int pilha_vazia(pilha_t* pilha) {
	return (pilha->size == 0 ? 1 : 0);
}

void pilha_empilha(pilha_t* pilha, int val) {
	pilha_no_t *no = malloc(sizeof(pilha_no_t));
	no -> data = val;
	no -> prox = pilha->topo;
	pilha->topo = no;
	pilha->size++;
}

void pilha_desempilha(pilha_t* pilha) {
	if(!pilha_vazia(pilha)){
		pilha_iterador it = pilha->topo;
		pilha->topo = pilha->topo->prox;
		free(it);
		pilha->size--;
	}
}

int pilha_topo(pilha_t* pilha) {
	return (pilha->topo->data);
}