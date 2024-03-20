#include <stdio.h>
#include <libprg/libprg.h>

int main() {
    ListaLinear lista = criar_lista(bool ordenada);

    adicionarElemento(&lista, 5);
    adicionarElemento(&lista, 10);
    adicionarElemento(&lista, 3);
    adicionarElemento(&lista, 7);

    mostrarLista(lista);

    return 0;
}