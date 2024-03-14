#include <iostream>

using namespace std;

void showVet(const char *pVet) { // <-- ponteiro do vetor do tipo char  
    for (; *pVet !='\0' ; pVet++) { // <-- os Arrays são, por natureza, ponteiros. O elementos ficam sequenciados na memória.
        cout << *pVet << endl << endl;
    }
}

int main() {
    char vetString[] = "Bruno"; // <-- declaração do array (tipo char -  cada posição é referente a um char)
    showVet(vetString); // <-- chamada da função para exibição de cada posição do array
}
