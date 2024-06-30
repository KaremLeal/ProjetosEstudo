//3- Escreva uma função que recebe as 4 notas de um aluno por parâmetro e uma letra. 
//Se a letra for A a função calcula a média aritmética das notas do aluno, se for P, a sua média ponderada 
//(pesos: 2, 3, 4 e 6)

#include <iostream>
using namespace std;

void media(double n1, double n2, double n3, double n4, char tipo) {
    double media;
    switch(tipo) {
        case 'A':
            media = (n1 + n2 + n3 + n4) / 4; 
            break;
        case 'a':
            media = (n1 + n2 + n3 + n4) / 4;  
            break;
        case 'P':
            media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 6) / 15;
            break;
        case 'p':
            media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 6) / 15;
            break;
    }

    cout << "Sua media:" << media;
}

int main() {
    double n1, n2, n3, n4;
    char tipo;

    cout << "Qual tipo de media deseja calcular? \n [A] - Aritmetica \n [B] - Ponderada";
    cin >> tipo;
    cout << "Insira as quatro notas: ";
    cin >> n1 >> n2 >> n3 >> n4;

    media(n1, n2, n3, n4, tipo);

    return 0;
}