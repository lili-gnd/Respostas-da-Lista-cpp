#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
      int soma = 0;
      cout << "Digite um número: ";
      cin >> n;

    for (int i = 1; i <= n - 1; i ++){
        soma += (n - i + 1);
    }
    cout << soma;
    return 0;
}
