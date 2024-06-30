#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<int> pilha;
    int num;
    
    
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
    
    stack<int>pilhatemp;

    while(!pilha.empty()) {
        int atual = pilha.top();
        pilha.pop();

        while (!pilhatemp.empty() && pilhatemp.top() > atual) {
            pilha.push(pilhatemp.top());
            pilhatemp.pop();
        }
        
        pilhatemp.push(atual);
    }
        
     while(!pilhatemp.empty()) {
        pilha.push(pilhatemp.top());
        pilhatemp.pop();
     }

     cout << "Os numeros em ordem:" << endl;
     
     while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
}