#include <iostream>
#include <string>
#include <vector>
using namespace std;

void selecao(vector<string> nomes)
{
    int n = nomes.size();

    for (int i = 0; i < n - 1; i++){
        int menor_idx = i;

        for (int j = i + 1; j < n; j++){
            if (nomes[j] < nomes[menor_idx]){
                menor_idx = j;
            }
        }

        if (menor_idx != i){
            string temp = nomes[i];
            nomes[i] = nomes[menor_idx];
            nomes[menor_idx] = temp;
        }
    }
    
}

int main()
{
    vector<string> nomes;
    string nome;

    while (true)
    {
        cout << "Insira um nome ou insira 'fim' para encerrar";
        cin >> nome;
        if (nome == "fim")
        {
            break;
        }

        nomes.push_back(nome);
    }

    // selecao(nomes);

    cout << "Lista ordenada: ";
    for (auto nome : nomes)
    {
        cout << nome << " ";
    }
    cout << endl;
    return 0;
}
