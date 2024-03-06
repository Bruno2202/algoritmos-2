#include <iostream>

using namespace std;

int main() {

    int num, i, numFat=1;

    cout << "Informe um numero inteiro: " << endl;
    cin >> num;
    cout << endl;

    for (i=1 ; i<=num ; i++) {
        numFat = numFat * i;
    }

    cout << "O fatorial de " << num << " e: " << numFat; 

    return 0;
}