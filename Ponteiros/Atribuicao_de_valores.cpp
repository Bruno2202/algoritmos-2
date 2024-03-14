
#include <iostream>

using namespace std;

int main() {
    int x = 2;
    int *y = &x; // <- Atribuido o endereço de memória de 'x' para o ponterio 'y'
    *y = 4;      // <- A variável atribuida ao pronteio 'y', recebe 4. Ou seja, "x = 4"
    cout << "*y: " << *y << endl;
    cout << "x: " << x << endl;
}