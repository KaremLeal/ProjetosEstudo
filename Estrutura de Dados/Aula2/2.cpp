//2- Criar uma função que receba três valores reais como parâmetro e retorne a média desses valores

#include <iostream>
using namespace std;

void calcularMedia(double n1, double n2, double n3) {
    double media;
    media = (n1 + n2 + n3) / 3;
    cout << "A media e: " << media;
}

int main() {
    double n1, n2, n3;
    cout << "Insira tres numeros";
    cin >> n1 >> n2 >> n3;
    calcularMedia(n1, n2, n3);

    return 0;
}