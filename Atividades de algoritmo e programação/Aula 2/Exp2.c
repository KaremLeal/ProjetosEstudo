#include <stdio.h>
int main()
{
    int posicao;
    char matrizCpf[4][12], cpf[12];

    printf("Insira o cpf: ");
    scanf("%c", &cpf[12]);
    printf("Insira a posicao: ");
    scanf("\n%d", &posicao);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 12; i++)
        {
            if (i == posicao)
            {
                matrizCpf[i][j] = cpf[j];
            }
            else
            {
                matrizCpf[i][j] = '0';
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 12; i++)
        {
            printf("\nelemento %c", matrizCpf[i][j]);
        }
    }
    printf("\n");
}
