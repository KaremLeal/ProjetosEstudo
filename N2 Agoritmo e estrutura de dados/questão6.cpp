#include <iostream>
using namespace std;

int main()
{
    int i = 99, j; 
    // Declara uma variável inteira 'i' e atribui o valor 99 a ela. Também declara uma variável inteira 'j'.

    int *p; 
    // Declara um ponteiro para um valor inteiro chamado 'p'.

    p = &i; 
    // Atribui o endereço de 'i' ao ponteiro 'p', ou seja, 'p' agora aponta para 'i'.

    j = *p + 100; 
    // Atribui a 'j' o valor resultante de desreferenciar o ponteiro 'p' (obtendo o valor armazenado em 'i') e somando 100.
}