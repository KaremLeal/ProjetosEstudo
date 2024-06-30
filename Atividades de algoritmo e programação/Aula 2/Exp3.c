#include <stdio.h>

int main()
{
   char palavra[30], busca;
   int count = 0;

   printf("Insira uma palavra: ");
   scanf("%s", &palavra);
   printf("Insira uma letra procurada: ");
   scanf("%s", &busca);
   

    for (int i = 0; i < 30; i++)
    {
       if (palavra[i] == busca)
       {
          count++;
       }
       
    }
    printf("A letra %c apareceu %d vezes.", busca, count);
}