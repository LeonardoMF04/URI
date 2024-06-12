#include <queue>
#include <iostream>

using namespace std;

int main() {
    queue<int> fila1, fila2;
    // Todos os comandos são O(1)

    // Adiciona elementos no final da fila2
    fila2.push(10);
    fila2.emplace(20);

    // Troca o conteúdo de fila2 para fila1
    fila2.swap(fila1);

    // Acessa o primeiro e o último elemento
    cout << "Primeiro elemento: " << fila1.front() << endl;
    cout << "Último elemento: " << fila1.back() << endl;
    cout << "Tamanho da fila1: " << fila1.size() << endl;

    // Copiando elementos de fila1 para fila2
    // O(n)
    queue<int> fila11 = fila1; // Use uma fila temporária para manter os dados de fila1

    // Desenfileira todos os elementos e imprime
    while (!fila1.empty()) {
        cout << fila1.front() << endl;
        fila1.pop(); //retira o mais velho
    }

    // Print da fila1 separados por espaço sem espaço no final
    while (!fila11.empty()) {
        cout << fila11.front();
        fila11.pop();
        if (!fila11.empty()) {
            cout << " ";
        }
    }
    cout << endl;


    // Verifica se a fila está vazia
    if (fila1.empty()) {
        cout << "Fila vazia" << endl;
    } else {
        cout << "Tamanho da fila1: " << fila1.size() << endl;
    }

    // Demonstrando outras operações
    fila1.push(30);
    fila1.push(40);

    queue<int> fila3;
    fila3.push(50);
    fila3.push(60);

    // Comparando duas filas (comparação léxica)
    if (fila1 == fila3) {
        cout << "fila1 e fila3 são iguais" << endl;
    } else if (fila1 < fila3) {
        cout << "fila1 é menor que fila3" << endl;
    } else {
        cout << "fila1 é maior que fila3" << endl;
    }

    // Trocando elementos novamente
    fila1.swap(fila3);

    cout << "Depois da troca, primeiro elemento de fila1: " << fila1.front() << endl;
    cout << "Depois da troca, primeiro elemento de fila3: " << fila3.front() << endl;

    return 0;
}

// Primeiro elemento: 10
// ├Ültimo elemento: 20
// Tamanho da fila1: 2
// 10
// 20
// 10 20
// Fila vazia
// fila1 ├® menor que fila3
// Depois da troca, primeiro elemento de fila1: 50
// Depois da troca, primeiro elemento de fila3: 30
