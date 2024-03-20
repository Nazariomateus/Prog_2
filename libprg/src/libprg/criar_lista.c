#include "libprg/libprg.h"

void criar_lista(bool ordenada){

    typedef struct {
        int *elementos;
        int tamanho;
        int capacidade;
    } ListaLinear;

    ListaLinear criarListaLinear() {
        ListaLinear lista;
        lista.elementos = (int *)malloc(TAMANHO_INICIAL * sizeof(int));
        lista.tamanho = 0;
        lista.capacidade = TAMANHO_INICIAL;
        return lista;
    }
}