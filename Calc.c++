#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;
    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Resultado: " << num1 + num2 << endl; break;
        case '-': cout << "Resultado: " << num1 - num2 << endl; break;
        case '*': cout << "Resultado: " << num1 * num2 << endl; break;
        case '/': 
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Erro: divisão por zero!" << endl;
            break;
        default: cout << "Operador inválido." << endl;
    }

    return 0;
}
