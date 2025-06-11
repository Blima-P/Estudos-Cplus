#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool primo = true;

    cout << "Digite um número: ";
    cin >> n;

    if (n <= 1)
        primo = false;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo)
        cout << n << " é primo.\n";
    else
        cout << n << " não é primo.\n";

    return 0;
}
