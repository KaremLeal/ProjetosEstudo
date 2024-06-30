#include <stack>
#include <iostream>

using namespace std;

int main()
{
    stack<int> pilha;
    int num;

    while (true) {
        cout << "Insira um numero inteiro ou 0 para encerrar";
        cin >> num;

        if (num == 0) {
            break;
        }

        pilha.push(num);
    }

    cout << "Os numeros pares sao: ";

    while (!pilha.empty()) {
        int num = pilha.top();
        if (num % 2 == 0) {
            cout << num << " ";
        }
        pilha.pop();
    }
}