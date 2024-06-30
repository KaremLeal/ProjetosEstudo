#include <iostream>
#include <list>
using namespace std;

int main()
{
    int op;
    list<int> numeros;
    while (true)
    {
        cout << "\nO que deseja fazer?" << endl;
        cout << "[1] - Inserir em lista ordenada" << endl;
        cout << "[2] - Remover da lista ordenada " << endl;
        cout << "[3] -  Listar os dados  " << endl;
        cout << "[4] - Terminar o programa " << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            int novo;
            cout << "Qual numero deseja inserir?";
            cin >> novo;
            numeros.push_back(novo);
            cout << "numero inserido";
            break;

        case 2:
            int removido;
            cout << "Qual numero deseja remover?";
            cin >> removido;
            numeros.remove(removido);
            cout << "numero removido";
            break;

        case 3:
            cout << "Numeros na lista: ";
            for (int elemento : numeros)
            {
                cout << elemento << " ";
            }

            cout << endl;

            break;

        case 4:
            cout << "Encerrando programa...";
            return 0;

        default:
            break;
        }
    }
}