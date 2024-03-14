#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char x [] = "Feliz aniversario para voce";
    char y [28], z[18], w[28];
    cout << "A string do vetor x = " << endl;
    cout << endl << "A string do vetor y = " << strcpy(y, x);
    strcpy(y, x, 17); // nao copia o caractere NULL
       
}