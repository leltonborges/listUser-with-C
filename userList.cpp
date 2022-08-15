#include "userList.h"
#include <string>
#include "userUtil.h"

Aluno *lista = lst_cria();

ALUNO *lst_cria() {
    return NULL;
}

ALUNO *getTotalList(void) {
    if (listaVazia(lista)) {
        printf("\n ==== Lista vazia ==== \n");
        return NULL;
    }

    return lista;
}

ALUNO *inserirList(ALUNO *top, ALUNO *newAluno) {
    if (newAluno == NULL) exit(EXIT_FAILURE);
    newAluno->prox = top;
    lista = newAluno;

    return lista;
}

void imprimirAll(ALUNO *lst_init) {
    if (listaVazia(lst_init)) {
        printf("\n ==== Lista vazia ==== \n");
        return;
    }

    ALUNO *aluno;
    for (aluno = lst_init; aluno != NULL; aluno = aluno->prox)
        imprimir(aluno);
}

void imprimir(ALUNO *aluno) {
    printf("\n-!-!-!-! Dados do Aluno: %s -!-!-!-!\n", aluno->nome);
    printf("\nNome: %s", aluno->nome);
    printf("\nIdade: %d", aluno->idade);
    printf("\nGenero: %c", aluno->genero);
    printf("\nNota: %0.2f", aluno->nota);
    printf("\n-!-!-!-! Fim dos dados do Aluno -!-!-!-!\n");
}

int menorIdade(ALUNO *list) {
    if (listaVazia(list)) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *aux;
    int menorIdade = list->idade;

    for (aux = list; aux != NULL; aux = aux->prox)
        if (aux->idade < menorIdade) menorIdade = aux->idade;

    return menorIdade;
}

int maiorIdade(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *aux;
    int maiorIdade = list->idade;

    for (aux = list; aux != NULL; aux = aux->prox)
        if (aux->idade > maiorIdade) maiorIdade = aux->idade;

    return maiorIdade;
}

bool listaVazia(ALUNO *list) {
    return list == NULL;
}

int count(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    int total = 0;
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        total++;

    return total;
}

float somaNotas(ALUNO *list) {
    if (listaVazia(list)) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    float total = 0;
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        total += aux->nota;

    return total;
}

int somaIdade(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    int total = 0;
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        total += aux->idade;

    return total;
}

float mediaNotas(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    float notas = somaNotas(list);
    int qtd = count(list);

    return notas / (qtd * 1.0);
}

float mediaIdade(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    int idades = somaIdade(list);
    int qtd = count(list);

    return idades / (qtd * 1.0);
}

ALUNO *listPorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return NULL;
    }

    ALUNO *lstAlunos = lst_cria();
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        if (toupper(aux->genero) == toupper(genero)) {
            ALUNO *aluno = copyAlunoWithoutNext(aux);
            if (lstAlunos == NULL)
                lstAlunos = inserirList(NULL, aluno);
            else
                lstAlunos = inserirList(lstAlunos, aluno);
        }

    return lstAlunos;
}

float mediaIdadePorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    ALUNO *porGenero = listPorGenero(list, genero);
    return mediaIdade(porGenero);
}

float mediaNotasPorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    ALUNO *porGenero = listPorGenero(list, genero);
    return mediaNotas(porGenero);
}

int maiorIdadePorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *porGenero = listPorGenero(list, genero);
    return maiorIdade(porGenero);
}

int menorIdadePorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *porGenero = listPorGenero(list, genero);
    return menorIdade(porGenero);
}

int somaIdadePorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    ALUNO *porGenero = listPorGenero(list, genero);
    return somaIdade(porGenero);
}

float somaNotaPorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    ALUNO *porGenero = listPorGenero(list, genero);
    return somaNotas(porGenero);
}

ALUNO *copyList(ALUNO *list) {
    if (list == NULL) {
        return NULL;
    } else {
        ALUNO *aluno = copyAlunoWithoutNext(list);
        aluno->prox = copyList(list->prox);
        return aluno;
    }

}

ALUNO *copyAlunoWithoutNext(ALUNO *source) {
    ALUNO *aluno = mollocAluno();
    copyArray(source->nome, aluno->nome);
    aluno->idade = source->idade;
    aluno->genero = source->genero;
    aluno->nota = source->nota;
    return aluno;
}

int countPorGenenro(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }
    ALUNO *porGenero = listPorGenero(list, genero);
    return count(porGenero);
}

ALUNO *maiorNota(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *maior = list;
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        if (maior->nota < aux->nota) maior = aux;

    return maior;
}

ALUNO *menorNota(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *menor = list;
    ALUNO *aux;

    for (aux = list; aux != NULL; aux = aux->prox)
        if (menor->nota > aux->nota) menor = aux;

    return menor;
}

ALUNO *maiorNotaPorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *porGenero = listPorGenero(list, genero);
    return maiorNota(porGenero);
}

ALUNO *menorNotaPorGenero(ALUNO *list, char genero) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return 0;
    }

    ALUNO *porGenero = listPorGenero(list, genero);
    return menorNota(porGenero);
}

void percentual(ALUNO *list) {
    if (list == NULL) {
        printf("\n ==== Lista vazia ==== \n");
        return;
    }
    int total = count(list);
    int totalM = countPorGenenro(list, 'M');
    int totalF = countPorGenenro(list, 'F');
    float percM = totalM * 1.0 * 100 / (total * 1.0);
    float percF = totalF * 1.0 * 100 / (total * 1.0);
    printf("\nTotal de alunos: %d", total);
    printf("\nPercentual F: %.2f%%", percF);
    printf("\nPercentual M: %.2f%%", percM);
}