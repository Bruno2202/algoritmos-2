#include <iostream>

using namespace std;


int calcFat(int numFat, int i, int num) {
    if (i <= num ) {
        numFat = numFat * i + 1;
        calcFat(numFat, i, num);
        return numFat;
    } else {
        return numFat;
    }
}

int main() {

    int num, i=1, numFat=1;

    cout << "Informe um numero inteiro: " << endl;
    cin >> num;
    i = num;
    cout << endl;

    cout << calcFat(numFat, i, num);

    return 0;
}