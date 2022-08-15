#include <iostream>
#include "user.h"
#include "userList.h"

bool repeat() {
    int resp;
    printf("\nDeseja inserir outro aluno");
    printf("\n0 - Não");
    printf("\n1 - Sim");
    scanf("%d", &resp);

    int result = resp == 0 || resp == 1;

    while (!result) {
        printf("\n========= Resposta invalida =========\n");
        repeat();
    }
    return resp;
}

ALUNO *registrar(ALUNO *init) {
    ALUNO *newTop;
    ALUNO *aluno;

    aluno = novoAluno();
    newTop = inserirList(init, aluno);
    bool isRepeat = repeat();
    if (isRepeat)
        registrar(newTop);

    return getTotalList();
}