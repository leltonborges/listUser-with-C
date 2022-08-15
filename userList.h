//
// Created by lelton on 8/14/22.
//
#include "user.h"

#ifndef INC_01_EXERCICIO_USERLIST_H
#define INC_01_EXERCICIO_USERLIST_H


ALUNO *lst_cria();

int maiorIdade(ALUNO *list);

int menorIdade(ALUNO *list);

void imprimirAll(ALUNO *lst_init);

void imprimir(ALUNO *aluno);

ALUNO *getTotalList(void);

bool listaVazia(ALUNO *list);

int count(ALUNO *list);

int somaIdade(ALUNO *list);

float somaNotas(ALUNO *list);

float mediaIdade(ALUNO *list);

float mediaNotas(ALUNO *list);

ALUNO *listPorGenero(ALUNO *list, char genero);

ALUNO *copyList(ALUNO *list);

ALUNO *copyAlunoWithoutNext(ALUNO *source);

float mediaIdadePorGenero(ALUNO *list, char genero);

int countPorGenenro(ALUNO *list, char genero);

int somaIdadePorGenero(ALUNO *list, char genero);

float somaNotaPorGenero(ALUNO *list, char genero);

float mediaNotasPorGenero(ALUNO *list, char genero);

int maiorIdadePorGenero(ALUNO *list, char genero);

int menorIdadePorGenero(ALUNO *list, char genero);

ALUNO *maiorNota(ALUNO *list);

ALUNO *menorNota(ALUNO *list);

ALUNO *maiorNotaPorGenero(ALUNO *list, char genero);

ALUNO *menorNotaPorGenero(ALUNO *list, char genero);

void percentual(ALUNO *list);

#endif //INC_01_EXERCICIO_USERLIST_H
