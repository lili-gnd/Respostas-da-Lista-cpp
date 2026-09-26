#include <iostream>

using namespace std;

int main()
{
     int soma = 0;

    for (int i = 1; i <=9; i ++){
        soma += (10 - i + 1);
    }
    cout << soma;
    return 0;
}
