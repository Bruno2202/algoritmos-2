#include <iostream>

using namespace std;

int func(int x, int y, int &z) {
    int s = (x + y + z);
    z = (x - y - z);
    return (s);
}

int main() {
    int a, b, c;

    cout << "Informe a: " << endl;
    cin >> a;
    cout << "Informe b: " << endl;
    cin  >> b;
    cout << "Informe c: " << endl;
    cin  >> c;
    cout << "A soma dos valores e: " << func(a, b, c) << endl;
    cout << "A subtracao dos valores e: " << c;
}