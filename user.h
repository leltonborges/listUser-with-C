//
// Created by lelton on 8/12/22.
//
#include <iostream>
#include <string>

#ifndef INC_01_EXERCICIO_USER_H
#define INC_01_EXERCICIO_USER_H
struct Aluno {
    char nome[20];
    int idade;
    char genero;
    float nota;
    struct Aluno *prox;
};

typedef Aluno ALUNO;

ALUNO *registrar(ALUNO *init);

ALUNO *mollocAluno(void);

ALUNO *inserirList(ALUNO *top, ALUNO *newAluno);

ALUNO *novoAluno();

void validaIdade(Aluno *aluno);

void validaGenero(Aluno *aluno);

bool repeat(void);

void inserirIdade(Aluno *aluno);

void inserirGenero(Aluno *aluno);

#endif //INC_01_EXERCICIO_USER_H
