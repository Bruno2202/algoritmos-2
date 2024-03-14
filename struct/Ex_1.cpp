#include <iostream>

using namespace std;

const int numProd = 1000;

struct produto {
    int cod, qtd_estoque;
    char desc[50];
    float preco;
};

void prodEstoqueMenor50(struct produto x) {
        cout << "PRODUTO COM ESTOQUE MENOR QUE 50: \n"; 
        cout << "Codigo: " << x.cod << "\n";
        cout << "Quantidade em estoque: " << x.qtd_estoque << "\n";
        cout << "Descricao: " << x.desc << "\n";
        cout << "Preco: " <<  x.preco << "\n\n";
}

int main() {
    struct produto prod[numProd];

    for (int i=0 ; i<numProd ; i++) {
        cout << "PRODUTO " << i+1 << "\n"; 
        cout << "Codigo:\n";
        cin >> prod[i].cod;
        cout << "Quantidade em estoque:\n";
        cin >> prod[i].qtd_estoque;
        cout << "Descricao:\n";
        cin >> prod[i].desc;
        cout << "Preco:\n";
        cin >> prod[i].preco;
        cout << "\n\n";
    }    

    cout << "------------------------------------------\n\n";

    for (int i=0 ; i<numProd ; i++) {
        if (prod[i].qtd_estoque < 50) {
            prodEstoqueMenor50(prod[i]);
        }
    }
}