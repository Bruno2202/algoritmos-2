#include <iostream>

using namespace std;

const int numComp = 1;

struct equip {
    int codigo ;
    char marca[20];
    char fabric[20];
    char modelo[20];
    float preco_comp, preco_vend;
};

void leitura (struct equip x[numComp]) {
    for (int i=0 ; i<50 ; i++) {
        cout << "Codigo:\n";
        cin >> x[i].codigo;
        cout << "Marca:\n";
        cin >> x[i].marca;
        cout << "Fabricante:\n";
        cin >> x[i].fabric;
        cout << "Modelo:\n";
        cin >> x[i].modelo;
        cout << "Preco de compra:\n";
        cin >> x[i].preco_comp;
        cout << "Preco de venda:\n";
        cin >> x[i].preco_vend;
    }
}

void mostrar(struct equip x[numComp]) {
    for (int i=0 ; i<numComp; i++) {
        cout << "\n\nCodigo: " << x[i].codigo;
        cout << "\n\nMarca: " << x[i].marca;
        cout << "\n\nFabricante: " << x[i].fabric;
        cout << "\n\nModelo: " << x[i].modelo;
        cout << "\n\nPreco de compra: " << x[i].preco_comp;
        cout << "\n\nPreco de venda:" << x[i].preco_vend;
    }
}

int main() {
    struct equip computadores[numComp];
    leitura(computadores);
    mostrar(computadores);
}