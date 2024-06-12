// chave e valor
// chave pode ser outro tipo de variável do valor : int -> string

#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declaração e inicialização de maps
    map<int, string> map1; // map vazio
    map<int, string> map2 = { {1, "um"}, {2, "dois"}, {3, "três"} }; // inicialização com lista de inicializadores

    // Inserção de elementos
    map1.insert(pair<int, string>(4, "quatro"));
    map1.insert({5, "cinco"});
    map1[6] = "seis"; // outra forma de inserção

    // Remoção de elementos
    map<int,string>::iterator it;
    it = map1.find(5);
    if (it != map1.end()) {
        map1.erase(it); // remove o elemento com chave 5
    }

    // Verificação de tamanho e estado
    cout << "Tamanho do map1: " << map1.size() << endl;
    cout << "O map1 está vazio? " << (map1.empty() ? "Sim" : "Não") << endl;

    // Acesso aos elementos
    cout << "Elemento com chave 4: " << map1[4] << endl;
    cout << "Elemento com chave 6: " << map1.at(6) << endl;

    // Iteração sobre os elementos
    cout << "Elementos de map1: ";
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        cout << "{" << it->first << ": " << it->second << "}";
        if (next(it) != map1.end()) {
            cout << ", ";
        }
    }
    cout << endl;

    // Verificação de existência de elementos
    int chave = 4;
    if (map1.count(chave) > 0) {
        cout << "A chave " << chave << " está presente no map1." << endl;
    } else {
        cout << "A chave " << chave << " não está presente no map1." << endl;
    }

    // Busca de elemento
    chave = 6;
    it = map1.find(chave);
    if (it != map1.end()) {
        cout << "Elemento encontrado: {" << it->first << ": " << it->second << "}" << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    // Atualização de elementos
    map1[4] = "QUATRO"; // Atualiza o valor associado à chave 4

    // Remoção de todos os elementos
    map1.clear();

    return 0;
}
