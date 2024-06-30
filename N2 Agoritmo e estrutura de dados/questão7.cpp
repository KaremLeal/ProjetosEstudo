  #include <iostream>
  using namespace std;

  int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0 ; i <= 4 ; i++){
      printf("i = %d",i);
      printf("   vet[%d] = %.1f",i, vet[i]);
      printf("   *(f + %d) = %.1f",i, *(f+i));
      printf("   &vet[%d] = %X",i, &vet[i]);
      printf("   (f + %d) = %X\n",i, f+i);
    }
    return 0;
  }

// O programa apresentado realiza o seguinte:

//1. Declaração e definição de um array de floats chamado "vet" com 5 elementos, inicializados com os valores {1.1, 2.2, 3.3, 4.4, 5.5}.
//2. Declaração de um ponteiro para float chamado "f".
//3. Declaração de uma variável inteira "i".
//4. Atribuição do endereço do primeiro elemento do array "vet" ao ponteiro "f".
//5. Impressão de um cabeçalho de informações formatado.
//6. Execução de um loop "for" para iterar de 0 a 4.
//7. Dentro do loop, as seguintes informações são impressas para cada iteração:
   //- O valor do contador "i".
   //- O valor armazenado no elemento "i" do array "vet".
   //- O valor apontado por "f" deslocado por "i" posições.
   //- O endereço do elemento "i" do array "vet".
   //- O endereço armazenado em "f" deslocado por "i" posições.
//8. O programa retorna 0, indicando que foi concluído com sucesso.

