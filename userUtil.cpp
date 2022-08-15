#include "userUtil.h"

ALUNO *a10 = mollocAluno();
ALUNO *a20 = mollocAluno();

void copyArray(char source[], char dest[]) {
    int length = sizeof(dest) / sizeof(dest[0]);
    for (int i = 0; i < length; ++i) {
        dest[i] = source[i];
    }
}

ALUNO *massaDe10ALunos(void) {
    ALUNO *a1 = mollocAluno();
    ALUNO *a2 = mollocAluno();
    ALUNO *a3 = mollocAluno();
    ALUNO *a4 = mollocAluno();
    ALUNO *a5 = mollocAluno();
    ALUNO *a6 = mollocAluno();
    ALUNO *a7 = mollocAluno();
    ALUNO *a8 = mollocAluno();
    ALUNO *a9 = mollocAluno();


    a1->prox = a2;
    a2->prox = a3;
    a3->prox = a4;
    a4->prox = a5;
    a5->prox = a6;
    a6->prox = a7;
    a7->prox = a8;
    a8->prox = a9;
    a9->prox = a10;

//    A1
    copyArray("Aluno1", a1->nome);
    a1->idade = 20;
    a1->genero = 'F';
    a1->nota = 5.4;
//    A2
    copyArray("Aluno2", a2->nome);
    a2->idade = 30;
    a2->genero = 'M';
    a2->nota = 8.5;
//    A3
    copyArray("Aluno3", a3->nome);
    a3->idade = 18;
    a3->genero = 'M';
    a3->nota = 9.6;
//    A4
    copyArray("Aluno4", a4->nome);
    a4->idade = 19;
    a4->genero = 'f';
    a4->nota = 6.8;
//    A5
    copyArray("Aluno5", a5->nome);
    a5->idade = 15;
    a5->genero = 'f';
    a5->nota = 9.8;
//    A6
    copyArray("Aluno6", a6->nome);
    a6->idade = 20;
    a6->genero = 'M';
    a6->nota = 4.8;
//    A7
    copyArray("Aluno7", a7->nome);
    a7->idade = 42;
    a7->genero = 'F';
    a7->nota = 7.2;
//    A8
    copyArray("Aluno8", a8->nome);
    a8->idade = 30;
    a8->genero = 'F';
    a8->nota = 8.5;
//    A9
    copyArray("Aluno9", a9->nome);
    a9->idade = 14;
    a9->genero = 'M';
    a9->nota = 6.9;
//    A10
    copyArray("Aluno10", a10->nome);
    a10->idade = 36;
    a10->genero = 'M';
    a10->nota = 7.5;

    return a1;
}

ALUNO *massaDe20ALunos(void) {
    ALUNO *a1 = massaDe10ALunos();
    ALUNO *a11 = mollocAluno();
    ALUNO *a12 = mollocAluno();
    ALUNO *a13 = mollocAluno();
    ALUNO *a14 = mollocAluno();
    ALUNO *a15 = mollocAluno();
    ALUNO *a16 = mollocAluno();
    ALUNO *a17 = mollocAluno();
    ALUNO *a18 = mollocAluno();
    ALUNO *a19 = mollocAluno();

    a10->prox = a11;
    a11->prox = a12;
    a12->prox = a13;
    a13->prox = a14;
    a14->prox = a15;
    a15->prox = a16;
    a16->prox = a17;
    a17->prox = a18;
    a18->prox = a19;
    a18->prox = a19;
    a19->prox = a20;

//    A11
    copyArray("Aluno11", a11->nome);
    a11->idade = 23;
    a11->genero = 'F';
    a11->nota = 7.6;
//    A12
    copyArray("Aluno12", a12->nome);
    a12->idade = 22;
    a12->genero = 'f';
    a12->nota = 7.6;
//    A13
    copyArray("Aluno13", a13->nome);
    a13->idade = 16;
    a13->genero = 'f';
    a13->nota = 10;
//    A14
    copyArray("Aluno14", a14->nome);
    a14->idade = 19;
    a14->genero = 'm';
    a14->nota = 9.9;
//    A15
    copyArray("Aluno15", a15->nome);
    a15->idade = 28;
    a15->genero = 'M';
    a15->nota = 7.8;
//    A16
    copyArray("Aluno16", a16->nome);
    a16->idade = 55;
    a16->genero = 'F';
    a16->nota = 6.2;
//    A17
    copyArray("Aluno17", a17->nome);
    a17->idade = 25;
    a17->genero = 'F';
    a17->nota = 8.8;
//    A18
    copyArray("Aluno18", a18->nome);
    a18->idade = 16;
    a18->genero = 'M';
    a18->nota = 7.1;
//    A19
    copyArray("Aluno19", a19->nome);
    a19->idade = 24;
    a19->genero = 'F';
    a19->nota = 9.7;
//    A20
    copyArray("Aluno20", a20->nome);
    a20->idade = 26;
    a20->genero = 'F';
    a20->nota = 5.6;

    return a1;
}

ALUNO *massaDe30ALunos(void) {
    ALUNO *a1 = massaDe20ALunos();
    ALUNO *a21 = mollocAluno();
    ALUNO *a22 = mollocAluno();
    ALUNO *a23 = mollocAluno();
    ALUNO *a24 = mollocAluno();
    ALUNO *a25 = mollocAluno();
    ALUNO *a26 = mollocAluno();
    ALUNO *a27 = mollocAluno();
    ALUNO *a28 = mollocAluno();
    ALUNO *a29 = mollocAluno();
    ALUNO *a30 = mollocAluno();

    a20->prox = a21;
    a21->prox = a22;
    a22->prox = a23;
    a23->prox = a24;
    a24->prox = a25;
    a25->prox = a26;
    a26->prox = a27;
    a27->prox = a28;
    a28->prox = a29;
    a28->prox = a29;
    a29->prox = a30;

//    A21
    copyArray("Aluno21", a21->nome);
    a21->idade = 20;
    a21->genero = 'F';
    a21->nota = 8.5;
//    A22
    copyArray("Aluno22", a22->nome);
    a22->idade = 19;
    a22->genero = 'm';
    a22->nota = 6.9;
//    A23
    copyArray("Aluno23", a23->nome);
    a23->idade = 19;
    a23->genero = 'M';
    a23->nota = 8.9;
//    A24
    copyArray("Aluno24", a24->nome);
    a24->idade = 19;
    a24->genero = 'F';
    a24->nota = 6.9;
//    A25
    copyArray("Aluno25", a25->nome);
    a25->idade = 23;
    a25->genero = 'M';
    a25->nota = 5.9;
//    A26
    copyArray("Aluno26", a26->nome);
    a26->idade = 23;
    a26->genero = 'F';
    a26->nota = 7.4;
//    A27
    copyArray("Aluno27", a27->nome);
    a27->idade = 19;
    a27->genero = 'F';
    a27->nota = 9.6;
//    A28
    copyArray("Aluno28", a28->nome);
    a28->idade = 41;
    a28->genero = 'M';
    a28->nota = 7.2;
//    A29
    copyArray("Aluno29", a29->nome);
    a29->idade = 25;
    a29->genero = 'F';
    a29->nota = 6.6;
//    A30
    copyArray("Aluno20", a20->nome);
    a30->idade = 26;
    a30->genero = 'F';
    a30->nota = 5.6;

    return a1;
}