#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main (){
    int num[5];

    cout << "Digite 5 numeros";
    for(int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    reverse(num, num + 5);
    cout << "Os numeros invertidos são: ";

     for(int i = 0; i < 5; i++) {
        cout<< num[i];
    }
    
}