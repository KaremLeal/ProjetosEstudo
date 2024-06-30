#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int num, restante;
    string conver;
    int opcao;
    stack<int> resto;

    cout << "Que numero de base 10 deseja converter?";
    cin >> num;
    cout << "Deseja converter para: \n [1] - binario \n [2] - octal \n [3] - hexadecimal";
    cin >> opcao;

    switch (opcao){
    case 1:
        while (true){
            if (num > 1){
                restante = num % 2;
                num = num / 2;
                resto.push(restante);
            }else{
                 while(!resto.empty()) {
                    conver += to_string(resto.top());
                    resto.pop();
                }
                cout << "O numero binario é " << conver;
                break;
            }
        }
        break;

    case 2:
        while (true){
            if (num > 0){
                restante = num % 8;
                num /= 8;
                resto.push(restante);
            }else{
                while(!resto.empty()) {
                    conver += to_string(resto.top());
                    resto.pop();
                }
                cout << "O numero octal é " << conver;
                
                break;
            }
        }
    case 3:
        while (true){
            if (num > 0){
                restante = num % 16;
                num /= 16;
                resto.push(restante);
            }else{
                while(!resto.empty()) {
                    conver += to_string(resto.top());
                    resto.pop();
                }
                cout << "O numero octal é " << conver;
                
                break;
            }
        }
    }
}
