#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main(void) {

	pilha_t* p;
	pilha_inicia(&p);
	int i;

	for(i = 1; i <= 10; i++)
		pilha_empilha(p, i);


	while(!pilha_vazia(p)) {
		printf("TOPO da Pilha: %2d\n", pilha_topo(p));
		pilha_desempilha(p);
	}


	pilha_deleta(&p);
	return 0;
}

