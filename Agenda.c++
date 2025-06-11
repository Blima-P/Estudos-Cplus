#include <iostream>
#include <string>
using namespace std;

struct Contato {
    string nome;
    string telefone;
};

int main() {
    const int MAX = 5;
    Contato contatos[MAX];
    int qtd = 0;

    while (qtd < MAX) {
        cout << "\nContato #" << (qtd + 1) << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, contatos[qtd].nome);
        cout << "Telefone: ";
        getline(cin, contatos[qtd].telefone);
        qtd++;
    }

    cout << "\nAgenda Completa:\n";
    for (int i = 0; i < qtd; i++) {
        cout << "Nome: " << contatos[i].nome << " | Telefone: " << contatos[i].telefone << endl;
    }

    return 0;
}
