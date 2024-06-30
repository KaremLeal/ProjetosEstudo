#include <stack>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Carta {
    int valor;
    string naipe;
};

void empilharBaralho(stack<Carta> & pilhaCartas, const vector<Carta> cartas) {
   
    for(const auto& carta : cartas) {
    pilhaCartas.push(carta);
   }
    
}

void desempilharBaralho(stack<Carta> & pilhaCartas) {
    while (!pilhaCartas.empty())
    {
       Carta carta = pilhaCartas.top();
       cout << "Desempilhando carta: " << carta.valor << " de " << carta.naipe << endl;
       pilhaCartas.pop();
    }
    
}

int main () {
    stack<Carta> pilhaCartas;
    vector<Carta> baralho;

    vector<int> valores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<string> naipes = {"Ouros", "Espadas", "Copas", "Paus"};

    for(const auto& valor : valores) {
        for(const auto& naipe: naipes) {
        Carta carta = {valor, naipe};
        pilhaCartas.push(carta);
    }
   }

   empilharBaralho(pilhaCartas, baralho);

   desempilharBaralho(pilhaCartas);

   return 0;
}