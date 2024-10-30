#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int main(){
	Lista* a;
	Lista* b;
	Lista* l = criarLista();
	l = inserirOrdem(l,1);
	l = inserirOrdem(l,4);
	l = inserirOrdem(l,3);
	l = inserirOrdem(l,6);
	l = inserirOrdem(l,100);
	printf("Elementos contidos na lista:\n");
	exibirLista(l);
    
	l = excluirLista(l,6);
	printf("O elemento 6 foi excluido da lista:\n");
	exibirLista(l);

	a = buscarLista(l,100);
	if(a != NULL) {
		printf("Encontrado:\n%d",a-> info);
	} else {
		printf("Não encontrado\n");
	}
	liberarLista(&l);

	exibirLista(l);
	return 0;
}