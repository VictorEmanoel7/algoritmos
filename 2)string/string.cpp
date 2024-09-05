#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int cont = 0;

    // Entrada da string
    cout << "Digite uma string: ";
    getline(cin, texto);

    // Loop para contar as ocorrências de 'a' ou 'A'
    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            cont++;
        }
    }

    // Verifica se a letra 'a' foi encontrada
    if (cont > 0) {
        cout << "A letra 'a' foi encontrada " << cont << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' nao foi encontrada na string." << endl;
    }

    return 0;
}
