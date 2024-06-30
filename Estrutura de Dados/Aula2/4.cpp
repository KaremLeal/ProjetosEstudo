//4- Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:  

//Idade	Categoria
//5 a 7 anos	Infantil A
//8 a 10 anos	Infantil B
//11-13 anos	Juvenil A
//14-17 anos	Juvenil B
//Maiores de 18 anos (inclusive)	Adulto

#include <iostream>
using namespace std;

void classeNadador(int idade) {
    if(idade >= 5 && idade <= 7) {
        cout << "Categoria Infantil A";

    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria Infantil B";
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria Juvenil A";
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria Juvenil B";
    } else {
        cout << "Categoria Adulto";
    }
}

int main () {
    int idade;

    cout << "Qual a idade do nadador? ";
    cin >> idade;

    classeNadador(idade);
    return 0;
}

