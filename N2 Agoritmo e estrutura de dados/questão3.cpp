#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<int> pilha;
    int num, impar;
    
    
    cout << "Insira o uma sequencia de numeros use 0 para parar ";
    cin >> num;

    while (true){
        if(num != 0) {
            pilha.push(num);
            cin >> num;
        } else {
            break;
        }
    }
    while (true) {
        impar = pilha.top();
        pilha.pop();

        if(impar % 2 != 0) {
            cout << impar << " ";
        }
    }

}