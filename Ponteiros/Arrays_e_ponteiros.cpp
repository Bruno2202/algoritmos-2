// pointer to arrays
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void somavetor(int *, int); // <- prototipação da função "somavetor"

int main() {
    const int arraysize = 5;
    int vetor[arraysize] = {93, 88, 94, 91, 82};
    int *ptr;
    ptr = vetor; // ou ptr=&vetor[ 0 ];

    cout << "ptr: " << ptr << " OU vetor: " << vetor << endl; // <- será exibido o enderço de memória da primeira posição do vetor
    cout << "*ptr: " << *ptr << " OU *vetor: " << vetor << endl << endl; // <- será exibido o VALOR da primeira posição do vetor (93)

    somavetor(vetor, arraysize);
    for (int i = 0; i < arraysize; i++) {
        cout << "Elemento " << i << " = " << *ptr++; // ou *(vetor+i)
        cout << endl;
    }
}

void somavetor(int *ptrvetor, int MAX) {
    int constant = 10;
    for (int i = 0; i < MAX; i++) {
        *ptrvetor = *ptrvetor + constant;
        ptrvetor++;
    }
}
