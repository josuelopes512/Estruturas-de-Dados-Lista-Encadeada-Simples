#include <stdio.h>
#include <stdlib.h>
#include "ListaSimpEncad.h"

int main(){
	TNo *lista = criar(10);
	int i;
	for(i = 0; i < 8; i++){
		inserir(lista, i);
	}
	exibe(lista);
	//remove_ordenada_decrescente(lista, 6);
	//exibe(lista);
	//mostraNo(lista);
	
	return 0;
}
