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