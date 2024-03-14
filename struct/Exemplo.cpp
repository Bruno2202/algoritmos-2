// É utilizado para declarar uma ou mais variáveis em um mesmo escopo

// struc pessoa {
//     int codigo;
//     cha nome[30];
//     float salario;
//     char cargo[20];
// } funcionario;  <- declaração da variável funcionario

// Depois de delcarar, pode ser feito desta forma abaixo:

// struct pessoa atendente, chefe;

// *Obs: A estrutura deve ser definida como GLOBAL, ou seja, fora da main

#include <iostream>

using namespace std;

int main() {
    struct estrutura {
        int num1;
    } b, c;

    struct estrutura d, e;

    cout << "Informe num1 de 'b': " << endl;
    cin >> b.num1;
    cout << "num1 de 'b': " << b.num1 << endl << endl;
    cout << "Informe num1 de 'c': " << endl;
    cin >> c.num1;
    cout << "num1 de 'b': " << c.num1 << endl << endl;
    cout << "Informe num1 de 'd': " << endl;
    cin >> d.num1;
    cout << "num1 de 'd': " << d.num1 << endl << endl;
    cout << "Informe num1 de 'e': " << endl;
    cin >> e.num1;
    cout << "num1 de 'e': " << e.num1 << endl << endl;
}