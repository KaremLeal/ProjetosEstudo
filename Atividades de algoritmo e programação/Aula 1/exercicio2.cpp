// EXERCICIO 2
// Modifique essse programa para que ele empilhe as
// cartas do baralho e depois desempilhe-as

#include <iostream>
#include <string.h>
using namespace std;

#define MAX 52

struct carta {
    int valor;
    char naipe[10];
};

int empilhar(int v[], int &topo, int dado);
int desempilhar(int v[], int &topo, int &dado);

int main(void) {
    // Declara um vetor de cartas
    carta cartas[MAX];
    // Decara pilha de cartas
    carta pcartas[MAX];
    int tcartas = -1;

    int i;

    // Cria cartas
    for(i=0; i<MAX; i++) {
        cartas[i].valor = (i%13)+1;
        if (i/13 < 1) strcpy(cartas[i].naipe,"ouros");
        else if (i/13 < 2) strcpy(cartas[i].naipe,"paus");
        else if (i/13 < 3) strcpy(cartas[i].naipe,"copas");
        else strcpy(cartas[i].naipe,"espadas");
    }

    while ()
    {
        /* code */
    }
    

}

// Empilha um valor
// Entrada:
//  v: vetor com elementos da pilha
//  topo: topo da pilha
//  valor: valor a ser empilhado
// Retorna:
//  1- Se pilha cheia
//  0- Caso contr�rio
int empilhar(int v[], int &topo, int dado) {
    // Se a pilha est� cheia... retorna 1
    if (topo>=MAX-1) {
        cout << "ERRO: Pilha cheia!" << endl;
        return 1;
    }
    // Se pilha n�o est� cheia, vamos empilhar
    topo = topo + 1;
    v[topo] = dado;
    // Indica que valor foi empilhado
    return 0;
}


// Desempilha um valor
// Entrada:
//  v: vetor com elementos da pilha
//  topo: topo da pilha
//  valor: Local a colocar valor desempilhado
// Retorna:
//  valor: valor desempilhado
//  1- Se pilha vazia
//  0- Caso contr�rio
int desempilhar(int v[], int &topo, int &dado) {
    // Se a pilha est� vazia... retorna 1
    if (topo<0) {
        cout << "ERRO: Pilha vazia!" << endl;
        return 1;
    }
    // Se pilha n�o est� vazia, vamos desempilhar
    dado = v[topo];
    topo = topo - 1;
    // Indica que valor foi desempilhado
    return 0;
}


