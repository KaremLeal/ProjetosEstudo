#include <iostream>
using namespace std;


int main(){
    int num;
    int pares = 0;
   for (int i = 0; i < 5; i++)
   {
    cout << "Digite um numero";
    cin >> num;
    if (num % 2 == 0)
    {
        pares++;
    }
    }

    cout << "Pares:" << pares << endl;
    
     return 0;
   }
   
   