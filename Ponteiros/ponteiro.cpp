#include <stdio.h>
#include <iostream>

using namespace std;

int func(int &x) {
    x = x + 10;
    return (x);
} 

int main() {
    cout << "Programa Exemplo ponteiros\n\n"; 
    int a = 10; 
    cout << "a: " << a  << endl;    // 10 
    cout << "&a: " << &a << endl;   // EXXXX (endereço de memória de 'a')
    int *ptrA;  // Declaração do ponteiro de "a" 
    ptrA = &a;  // O valor de 'ptrA' recebe o endereço de memória de "a" (EXXX)
    cout << "ptrA: " << ptrA << endl;   // EXXXX (valor de 'ptrA' (endereço de "a"))
    cout << "&ptrA: " << &ptrA << endl; // EYYYY (endereço de memória de 'ptrA')
    cout << "*ptrA: " << *ptrA << endl; // 10 (valor do endereço de memória o qual ptrA está apontando (valor da variável "a"))
    int b = 20;
    int *ptrB =  &b;    // ponteiro de "b" recebe endereço de memória de "b"
    cout << "*ptrB: " << *ptrB << endl; // 20 (valor da variável a qual ponteiro de "b" está apontando)
    cout << "ptrB: " << ptrB << endl;   // EZZZZ (valor do ponteiro de "b" (enderço de memória de "b"))
    ptrB = ptrA;    // O ponteiro de "b" recebe o valor do ponteiro de "a" (agora ponteiro de b aponta para a variável "a")
    cout << "*ptrB: " << *ptrB << endl; //10 (valor de "a")
    *ptrB = *ptrB + 15; // "a" recebe  + 15 (a == 25) 
    cout << "a: " << a << endl; // 25
    ptrA = &b;  // o ponteiro de "a" recebe o endereço da variável "b" 
    b = b * 2;  // 20 * 2 = 40
    cout << "*ptrA: " << *ptrA << endl; // 40 (valor da variável a qual o ponteiro de "a" está apontando ("b"))

    int a = 5;
    cout << "&a: " << &a << "\n";
    cout << "func: " << func(a) << "\n";
    cout << "a: " <<  a << "\n";
}