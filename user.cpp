#include <iostream>
#include "user.h"
#include "userList.h"
#include<stdlib.h>

ALUNO *mollocAluno(void) {
    return static_cast<ALUNO *>(malloc(sizeof(ALUNO)));;
}

ALUNO *novoAluno() {
    ALUNO *novo = mollocAluno();

    printf("\nInforme nome do aluno: ");
    fflush(stdin);
    scanf("%s", novo->nome);

    inserirIdade(novo);
    inserirGenero(novo);

    printf("\nInforme a nota:");
    fflush(stdin);
    scanf("%f", &novo->nota);

    return novo;
}

void inserirIdade(Aluno *aluno) {
    printf("\nIdade do(a) %s", aluno->nome);
    printf("\nIdade >= 1");
    printf("\nIdade < 120");
    fflush(stdin);
    scanf("%d", &aluno->idade);
    validaIdade(aluno);
}

void inserirGenero(Aluno *aluno) {
    printf("\nPara %s, informe o genero?", aluno->nome);
    printf("\nM/m -> para quem nasceu homem");
    printf("\nF/f -> para quem nasceu Mulher");
    fflush(stdin);
    scanf(" %c", &aluno->genero);
    aluno->genero = toupper(aluno->genero);
    validaGenero(aluno);
}

void validaIdade(Aluno *aluno) {
    if (aluno->idade < 1 || aluno->idade > 120) {
        printf("\n============= Idade invalida =============");
        printf("\nIdade tem que ser maior que 0 e menor que 120\n");
        inserirIdade(aluno);
    }
}

void validaGenero(Aluno *aluno) {
    int resut = aluno->genero == 'M' || aluno->genero == 'F';
    if (resut == 0) {
        printf("\n============= Genero invalida =============");
        printf("\nM/m -> para quem nasceu homem");
        printf("\nF/f -> para quem nasceu Mulher\n");
        inserirGenero(aluno);
    }
}
