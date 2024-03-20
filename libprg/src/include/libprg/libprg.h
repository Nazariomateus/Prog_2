#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

//typedef struct {
//    double value;
//    int error;
//} result_t;
//
//typedef enum { SUM, SUB } operation_t;
//
//result_t sub(double a, double b);
//result_t sum(double a, double b);
//result_t compute(double a, double b, operation_t op);

//LISTA LINEAR

#include <stdbool.h>

void criar_lista(bool ordenada);
int inserir(lista* lista, int valor);
int remover(lista* lista, int valor);
int busca_linar(lista* lista, int valor);
int busca_binaria_interativa(lista* lista, int valor);
int busca_binaria_recursiva(lista* lista, int valor, int inicio, int fim);

#endif
