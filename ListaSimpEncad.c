#include <stdio.h>
#include <stdlib.h>
#include "ListaSimpEncad.h"

struct No {
	int info;
	TNo *prox; //ponteiro para o próximo
};

TNo* criar(int v){
	TNo* ptno = (TNo*)malloc(sizeof(TNo));
	ptno->info = v;
	ptno->prox = NULL;
	return ptno;
}


int tamanho(TNo *e){
	if(e == NULL) return -1;
	TNo *ptaux = e->prox;
	int n = 0;
	while(ptaux != NULL){
		n = n + 1;
		ptaux = ptaux->prox;
	}
	return n;
	
}

void inserir(TNo *e, int v){
	//inserir final
	if(e == NULL) return;
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		ptaux = ptaux->prox;
	}
	ptaux->prox = criar(v);
}

void remover(TNo *e, int v){
	if(e == NULL) return;
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		if(ptaux->prox->info == v){
			ptaux->prox = ptaux->prox->prox;
		}else{
			ptaux = ptaux->prox;
		}
	}
}

TNo* buscar(TNo *e, int v){
	if(e == NULL) return;
	TNo *ptaux = e->prox;
	while(ptaux != NULL){
		if(ptaux->info == v){
			return ptaux;
		}else{
			ptaux = ptaux->prox;
		}
	}
	return NULL;
}

void exibe(TNo *e){
	if(e == NULL) return;
	TNo *ptaux = e->prox;
	printf("\n");
	while(ptaux != NULL){
		printf("%d", ptaux->info);
		ptaux = ptaux->prox;
	}
	printf("\n");
}

void mostraNo(TNo *e){
	if(e == NULL) return;
	printf("%d", e->info);
}

void inserirInicio(TNo *e, int v){
	if(e == NULL) return;
	TNo *ptnovo = criar(v);
	ptnovo->prox = e->prox;
	e->prox = ptnovo;
}

/*
TNo* removerInicio(TNo *e){
	if(e == NULL) return;
	TNo *ptrem = e->prox;
	remover(e, ptrem-> info);
	return ptrem;
}*/

TNo* removerInicio(TNo *e){
	if(e == NULL) return NULL;
	TNo *ptrem = e->prox;
	if(ptrem == NULL) return NULL;
	e->prox = ptrem->prox;
	return ptrem;
}
/*
int remover_ordenada_descrescente(TNo* lista, int valor_remover){
    TNo* listaAuxiliar_remover = lista;
	TNo* listaContador = lista;
	int contadorLista = 0;
	int index = 0;
    
	if (lista == NULL){
		printf("Posição para alocação do valor invalida, lista cheia ou vazia \n");
		return 0;
	}
		
		while (listaContador->prox != NULL) {
			contadorLista = contadorLista + 1;
			listaContador = listaContador->prox;
		}		
		
		for(index = 0; index < contadorLista; index++){
			TNo* valorRemovido = NULL;
			if (listaAuxiliar_remover->prox->info <= valor_remover) {
				valorRemovido = listaAuxiliar_remover->prox = listaAuxiliar_remover->prox->prox;
				printf("Um valor foi removido \n");
				return valorRemovido;
			}	
			listaAuxiliar_remover = listaAuxiliar_remover->prox;
		}
}
*/

void remove_ordenada_decrescente(TNo *e, int x){
    if(e == NULL) return;
    TNo *ptaux = e;
    while(ptaux->prox->info >= x){
        if(x == ptaux->prox->info){
            ptaux->prox = ptaux->prox->prox;
        }
        else{
            ptaux = ptaux->prox;
        }
        printf("%d", ptaux->prox->info);
    }
}
