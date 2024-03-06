#include <iostream>

using namespace std;

int main()
{
    const int T = 10;
    int cont;
    int numMaior = -9999;
    int numMenor = 9999;
    float media = 0;
    int numAnt;
    int nums[T];

    // Zerar arraycm
    for (cont = 0; cont < T; cont++)
    {
        nums[cont] = 0;
    }

    // Inserir valores no array
    for (cont = 0; cont < T; cont++)
    {
        cout << "Insira um numero" << endl;
        cin >> nums[cont];
        if (cont == 0)
        {
            numAnt = nums[cont];
        }
        if (nums[cont] - 1 == numAnt)
        {
            cont = T;
        }
        numAnt = nums[cont];
    }

    // Cálculos
    for (cont = 0; cont < T; cont++)
    {
        media = media + nums[cont];
        if (nums[cont] > numMaior)
        {
            numMaior = nums[cont];
        }
        else if (nums[cont] < numMenor)
        {
            numMenor = nums[cont];
        }
    }

    cout << "Soma: " << media << endl
         << "Media: " << media / T << endl
         << "Maior numero: " << numMaior << endl
         << "Menor numero: " << numMenor << endl;

    return 0;
}