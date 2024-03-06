#include <iostream>

using namespace std;

void func(int &x, float &y) {
    x = (x + y);
    y = (x / 2);
}

int main() {
    int a; 
    float b;

    cout << "Informe a: " << endl;
    cin >> a;
    cout << "Informe b: " << endl;
    cin  >> b;
    func(a, b);
    cout << "A soma dos valores e: " << a << endl;
    cout << "A media dos valores e: " << b << endl;
}