#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUTOS = 100;

struct Produto {
    int codigo;
    string nome;
    float preco;
};

// Funções
void cadastrarProduto(Produto produtos[], int &quantidade) {
    if (quantidade >= MAX_PRODUTOS) {
        cout << "Limite de produtos atingido!" << endl;
        return;
    }

    Produto p;
    cout << "Código do produto: ";
    cin >> p.codigo;
    cin.ignore(); // Limpar buffer
    cout << "Nome do produto: ";
    getline(cin, p.nome);
    cout << "Preço do produto: ";
    cin >> p.preco;

    produtos[quantidade++] = p;
    cout << "Produto cadastrado com sucesso!\n";
}

void listarProdutos(Produto produtos[], int quantidade) {
    if (quantidade == 0) {
        cout << "Nenhum produto cadastrado." << endl;
        return;
        }

    cout << "\nLista de Produtos:\n";
    for (int i = 0; i < quantidade; i++) {
        cout << "Código: " << produtos[i].codigo << " | ";
        cout << "Nome: " << produtos[i].nome << " | ";
        cout << "Preço: R$" << produtos[i].preco << endl;
    }
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int quantidade = 0;
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Cadastrar produto\n";
        cout << "2. Listar produtos\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, quantidade);
                break;
            case 2:
                listarProdutos(produtos, quantidade);
                break;
            case 0:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }

    } while (opcao != 0);

    return 0;
}