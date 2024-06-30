// EXERCICIO 1
// Modidique esse programa para que apenas os alunos com
// nota igual ou superior a 6.0 tenham sua matr�cula exibida

#include <iostream>
#include <string.h>
using namespace std;

#define MAX 50

struct aluno
{
    char nome[50];
    int matricula;
    float nota;
};

void imprime(aluno v[], int num);

int main(void)
{
    // Declara um aluno
    aluno alunos[MAX];

    alunos[0].matricula = 12014432;
    alunos[0].nota = 7.5;
    strcpy(alunos[0].nome, "Fulano");
    alunos[1].matricula = 13022301;
    alunos[1].nota = 5.9;
    strcpy(alunos[1].nome, "Sicrano");
    alunos[2].matricula = 11024122;
    alunos[2].nota = 4.0;
    strcpy(alunos[2].nome, "Beltrano");
    alunos[3].matricula = 11014120;
    alunos[3].nota = 6.1;
    strcpy(alunos[3].nome, "Huguinho");
    alunos[4].matricula = 11024012;
    alunos[4].nota = 8.0;
    strcpy(alunos[4].nome, "Zezinho");
    alunos[5].matricula = 11014117;
    alunos[5].nota = 3.5;
    strcpy(alunos[5].nome, "Luizinho");

    imprime(alunos, 6);
}

void imprime(aluno v[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        if (v[i].nota >= 6)
        {
            cout << "Mat.: " << v[i].matricula << endl;
            cout << "Nome: " << v[i].nome << endl;
            cout << "Nota: " << v[i].nota << endl;
        }
    }
}
