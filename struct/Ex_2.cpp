#include <iostream>
#include <string.h>

using namespace std;

struct pessoa {
    char nome[20], endereco[50];
    int idade;
};

int main() {
    int numP = 1;
    char conf, usuario[20];
    struct pessoa pessoas[numP];

    //Comando de parada "N"
    for (int i=0 ; i<numP ; i++) {
        cout << "PESSOA " << i+1 << ":\n"; 
        cout << "Nome:\n";
        cin >> pessoas[i].nome;
        cout << "Idade:\n";
        cin >> pessoas[i].idade;
        cout << "Endereco:\n";
        cin >> pessoas[i].endereco;
        cout << "\n\n";
        cout << "Deseja informar mais um usuario? (S/N):\n";
        cin >> conf;
        cout << "\n\n";
        if (conf == 'S') {
            numP = numP+1;
        }
    }

    cout << "Deseja o atualizar usuario? (S/N)\n";
    cin >> conf;
    cout << "\n\n";
    if (conf == 'S') {
        while (conf == 'S') {
            cout << "Informe o nome do usuario:\n";
            cin >> usuario;
            cout << "\n\n";
            for (int i=0 ; i<numP ; i++) {
                if (strcmp(pessoas[i].nome, usuario) == 0) { // <- Comparar caracteres sctrcmp(x, y) // se a string é igual retorna 0, se não retorna -1 //  e declarar "#include <string.h>" 
                    cout << "INSIRA OS NOVOS DADOS\n"; 
                    cout << "Nome:\n";
                    cin >> pessoas[i].nome;
                    cout << "Idade:\n";
                    cin >> pessoas[i].idade;
                    cout << "Endereco:\n";
                    cin >> pessoas[i].endereco;
                    cout << "\n\n";

                    cout << "DADOS ATUALIZADAS\n"; 
                    cout << "Nome: " << pessoas[i].nome << "\n";
                    cout << "Idade: " << pessoas[i].idade << "\n";
                    cout << "Endereco: " << pessoas[i].endereco << "\n\n";
                }
            }  
            cout << "Deseja o atualizar outro usuario? (S/N)\n";
            cin >> conf;
            cout << "\n\n";
        }
    }
}