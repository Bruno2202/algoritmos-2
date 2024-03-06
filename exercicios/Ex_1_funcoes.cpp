#include <iostream>

using namespace std;

void mult3Exmplo1(int a)
{
    if (a % 3 == 0)
    {
        cout << "Numero e multiplo de 3";
    }
    else
    {
        cout << "Numero nao e multiplo de 3";
    }
}

int mult3Exmplo2(int a)
{
    int resto = (a % 3 == 0);
    return (resto);
}

int main()
{
    int num;

    cout << "Insira um numero" << endl;
    cin >> num;
    cout << endl
         << endl;
    // Exemplo 1
    mult3Exmplo1(num);

    // Exemplo 2

    if (mult3Exmplo2(num) == 0)
    {
        cout << "Numero e multiplo de 3";
    }
    else
    {
        cout << "Numero nao e multiplo de 3";
    }

    return 0;
}