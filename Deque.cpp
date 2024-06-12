// Vantagem do Queue e Stack é que aqui podemos trabalhar com iterator
// Pode ser acessado de ambos os lados
// Podemos colocar e retirar no início quanto no final

#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Declaração e inicialização de deques
    deque<int> deque1; // deque vazio
    deque<int> deque2(5, 0); // deque com 5 elementos inicializados com 0
    deque<int> deque3(deque2); // deque 3 igual ao deque 2
    deque<int> deque4 = {1, 2, 3, 4}; // deque inicializado com uma lista de inicializadores

    // Inserção e remoção no final e no início
    deque1.push_back(10);
    deque1.push_front(20);
    deque1.pop_back();
    deque1.pop_front();

    // Inserção e remoção em qualquer posição
    deque1.insert(deque1.begin() + 1, 30);
    deque1.erase(deque1.begin() + 1);

    // Acesso aos elementos
    cout << "Primeiro elemento: " << deque1.front() << endl;
    cout << "Último elemento: " << deque1.back() << endl;
    cout << "Elemento na posição 2: " << deque1.at(2) << endl;

    // Verificação de tamanho e estado
    cout << "Tamanho do deque1: " << deque1.size() << endl;
    cout << "O deque1 está vazio? " << (deque1.empty() ? "Sim" : "Não") << endl;

    // Iteração sobre os elementos
    cout << "Elementos de deque1: ";
    for (auto it = deque1.begin(); it != deque1.end(); ++it) {
        cout << *it;
        if (next(it) != deque1.end()){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
