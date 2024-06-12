// Nao permite que os elementos sejam duplicados!
// Nao importe a ordem, os elementos sempre estarão ordenados

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declaração e inicialização de sets
    set<int> set1; // set vazio
    set<int> set2 = {3, 1, 4, 1, 5, 9}; // inicialização com lista de inicializadores

    // Inserção e remoção de elementos
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.erase(20);

    // Verificação de tamanho e estado
    cout << "Tamanho do set1: " << set1.size() << endl;
    cout << "O set1 está vazio? " << (set1.empty() ? "Sim" : "Não") << endl;

    // Iteração sobre os elementos
    cout << "Elementos de set1: ";
    for (auto it = set2.begin(); it != set2.end(); ++it) {
        cout << *it;
        if (next(it) != set2.end()){
            cout << " ";
        }
    }
    cout << endl;

    // Verificação de existência de elementos
    int elemento = 10;
    if (set1.count(elemento) > 0) {
        cout << elemento << " está presente no set1." << endl;
    } else {
        cout << elemento << " não está presente no set1." << endl;
    }

    // Busca de elemento e iteração com foreach
    elemento = 30;
    auto it = set1.find(elemento);
    if (it != set1.end()) {
        cout << "Elemento encontrado: " << *it << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    // Remoção de todos os elementos
    set1.clear();

    return 0;
}

