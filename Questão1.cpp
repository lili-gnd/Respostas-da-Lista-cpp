#include <iostream>

using namespace std;
// Somatório de i =1
int main()
{
    int soma = 0;
    for (int i = 1; i <=10; i ++){
        soma += i*i*i;
    }
    cout << soma;
    return 0;
}
