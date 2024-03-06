#include <iostream>

using namespace std;

int func(int x, int &y, int &z) {
    float media = (x+y+z) / 3;

    int vet[3] = {x, y, z};
    y = x;
    z = x;
    for (int i=0 ; i<3; i++) {
        if (vet[i] < y ) {
            y = vet[i];
            i=0;
        } else if (vet[i] > z) {
            z = vet[i];
            i=0;
        }
    }

    return(media);
}

int main() {
    int a, b, c;

    cout << "Informe a: " << endl;
    cin >> a;
    cout << "Informe b: " << endl;
    cin  >> b;
    cout << "Informe c: " << endl;
    cin  >> c;
    cout << "A media dos valores e: " << func(a, b, c) << endl;
    cout << "O menor valor e: " << b << endl;
    cout << "O maior valor e: " << c;
}