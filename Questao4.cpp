#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(0));
    int t, soma = 0, maior = 18, menor = 30, acima25 = 0;
    for(int i = 0; i < 10; i++){
        t = rand()% 13 + 18;
        soma += t;
        if (t > maior )maior = t;
        if (t < menor )menor = t;
        if (t > 25 )acima25++;
    }
    cout << "Média: " << soma /10.0 << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Acima de 25: " << acima25 << endl;

    return 0;
}
