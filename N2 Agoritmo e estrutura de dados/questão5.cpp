#include <iostream>
using namespace std;

int main () {
    int num[5];
    int total = 0;
    int menor;
    int maior = 0;
    double media;
    cout << "Digite 5 numeros";
    for(int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < 5; i++) {
        if(num[i] > maior) {
            maior = num[i];
        }
    }
    menor =  num[0];
    for(int i = 0; i < 5; i++) {
        if(num[i] < menor) {
            menor = num[i];
        }
    }

    for(int i = 0; i < 5; i++) {
        total += num[i];
    }
    media = total / 5;

    cout << "O maior numero: " << maior << endl;
    cout << "O menor numero: " << menor << endl;
    cout << "A media numero: " << media << endl;
}