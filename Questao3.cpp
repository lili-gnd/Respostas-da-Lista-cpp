#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número entre 0 e 9: ";
    cin >> n;

    if (n >= 0 && n <= 9) {
        for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
                cout << n;
    if (j < n - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Número inválido! Digite apenas valores entre 0 e 9." << endl;
    }

}

