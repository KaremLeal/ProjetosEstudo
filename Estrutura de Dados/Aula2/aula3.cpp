#include <iostream>
#include <string>
using namespace std;

void menu() {
    string convite[3] = {"#", "#", "#"};
    int op = 0;
    string conv;
    int x = 0;
    int y = 0;
    
    do
    {
        cout << "O que deseja fazer" << endl;
        cout << "[1] - Adicionar convidado" << endl;
        cout << "[2] - Exibir lista de convidados" << endl;
        cout << "[3] - Excluir convidado" << endl;
        cout << "[4] - Sair" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            for(int i = 0; i < 3; i++) {
                
                if(convite[i] == "#") {
                    cout << "Qual o nome do convidado?";
                    cin >> conv;
                    convite[i] = conv;
                    i = 3;
                    cout << "Convidado adicionado!";
                } else {
                    x++;
                }
            }

            if(x == 3) {
                cout << "Lista cheia!";
            }
            break;
        case 2:
            cout << "Lista de convidados:" << endl;
            for(int i = 0; i < 3; i++) {
                cout << convite[i] << endl;
             }
            break;
        case 3:
            cout << "Quem deseja deletar da lista?";
            cin >> conv;
            for(int i = 0; i < 3; i++) {
                if(convite[i] == conv) {
                    convite[i] = "#";
                    i = 3;
                    cout << "Convidado deletado!";
                } else {
                    y++;
                }
             }

             if(y == 3) {
                cout << "Convidado nao encontrado";
             }
            break;
        case 4:
            cout << "Tchau :)";
            break;
        
        default:
            cout << "Opção inválida!";
            break;
        }
    } while (op != 4);
    
}

int main() {
    menu();
    return 0;
}