#include <iostream>
using namespace std;

int main()
{
    char q1, q2, q3, q4, q5;
    char r1, r2, r3, r4, r5;
    int quantidadeAluno;

    cout << "Insira a quantidade de alunos:";
    cin >> quantidadeAluno;
    cout << "Insira o gabarito \n Questao 1:";
    cin >> q1;
    cout << "Questao 2:";
    cin >> q2;
    cout << "Questao 3:";
    cin >> q3;
    cout << "Questao 4:";
    cin >> q4;
    cout << "Questao 5:";
    cin >> q5;

    for (int i = 0; i < quantidadeAluno; i++)
    {   int acertos = 0;
        cout << "\nInsira as respostas do aluno \nResposta 1:";
        cin >> r1;
        if (r1 == q1)
        {
            acertos++;
        }
        
        cout << "Resposta 2:";
        cin >> r2;
         if (r2 == q2)
        {
            acertos++;
        }

        cout << "Resposta 3:";
        cin >> r3;
         if (r3 == q3)
        {
            acertos++;
        }

        cout << "Resposta 4:";
        cin >> r4;
         if (r4 == q4)
        {
            acertos++;
        }

        cout << "Resposta 5:";
        cin >> r5;
         if (r5 == q5)
        {
            acertos++;
        }

        cout << "O aluno acertou " << acertos << " questoes.";
    }

    return 0;
}