//1- Criar uma função para calcular o dobro de um número passado como parâmetro.

#include <iostream>
using namespace std;

void calcularDobro(double numero) {
    numero = numero * 2;
    cout << "O dobro e " << numero;
}

int main () {
    double numero;
    cout << "Insira um numero que deseja dobrar";
    cin >> numero;
    calcularDobro(numero);
    

    return 0;
}