#include "user.h"
#include "userList.h"
#include "userUtil.h"

int main() {

//    ALUNO *list = lst_cria();
//    ALUNO *result = registrar(list);
//    int idadeMaior = maiorIdade(result);
//    int idadeMenor = menorIdade(result);
//
//    imprimirAll(result);
//
//    printf("Maior idade: %d", idadeMaior);
//    printf("Menor idade: %d", idadeMenor);

    ALUNO *massaDeDados = massaDe30ALunos();
    float generoF = mediaIdadePorGenero(massaDeDados, 'f');
    float generoM = mediaIdadePorGenero(massaDeDados, 'm');
    printf("\nmedia idade F:: %.2f", generoF);
    printf("\nmedia idade M:: %.2f", generoM);

    int maiorM = maiorIdadePorGenero(massaDeDados, 'M');
    int menorM = menorIdadePorGenero(massaDeDados, 'M');
    int maiorF = maiorIdadePorGenero(massaDeDados, 'F');
    int menorF = menorIdadePorGenero(massaDeDados, 'F');

    printf("\nMaior idade M:: %d", maiorM);
    printf("\nMenor idade M:: %d", menorM);
    printf("\nMaior idade F:: %d", maiorF);
    printf("\nMenor idade F:: %d", menorF);
    percentual(massaDeDados);

    return 0;
}
