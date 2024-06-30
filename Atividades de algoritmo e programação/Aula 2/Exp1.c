#include <stdio.h>
int main()
{
    int cpf[11], cpf_individual, posicao;

    printf("insira primeiro cpf: ");
    scanf("\n%d", &cpf[0]);

    printf("insira segundo cpf: ");
    scanf("\n%d", &cpf[1]);

    printf("O primeiro cpf inserido foi %d\n", cpf[0]);
    printf("O segundo cpf inserido foi %d\n", cpf[1]);

    printf("insira a posicao de alteracao de cpf: ");
    scanf("\n%d", &posicao);
    printf("insira o novo cpf: ");
    scanf("\n%d", &cpf_individual);

    cpf[posicao] = cpf_individual;


    printf("O primeiro cpf alterado foi %d\n", cpf[posicao]);
}
