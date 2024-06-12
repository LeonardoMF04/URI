#include <stack>
#include <iostream>

using namespace std;

int main() {
    stack<int> pilha1, pilha2, temp;

    // Adiciona elementos na pilha1
    pilha1.push(10);
    pilha1.push(20);
    pilha1.push(30);

    // Copiando elementos de pilha1 para pilha2 usando uma pilha temporária
    pilha2 = pilha1;
    

    // Verificar os elementos de pilha2 para garantir que a cópia foi bem-sucedida
    cout << "Elementos de pilha2: ";
    while (!pilha2.empty()) {
        cout << pilha2.top();
        pilha2.pop();
        if (!pilha2.empty()){
            cout << " ";
        }
    }
    cout << endl;

    // Verificar que os elementos de pilha1 ainda estão presentes
    cout << "Elementos de pilha1: ";
    while (!pilha1.empty()) {
        cout << pilha1.top() << " ";
        pilha1.pop();
    }
    cout << endl;

    // Demonstrando outras operações
    pilha1.push(40);
    pilha1.push(50);

    stack<int> pilha3;
    pilha3.push(60);
    pilha3.push(70);

    // Comparando duas pilhas (comparação léxica)
    if (pilha1 == pilha3) {
        cout << "pilha1 e pilha3 são iguais" << endl;
    } else if (pilha1 < pilha3) {
        cout << "pilha1 é menor que pilha3" << endl;
    } else {
        cout << "pilha1 é maior que pilha3" << endl;
    }

    // Trocando elementos novamente
    pilha1.swap(pilha3);

    cout << "Depois da troca, primeiro elemento de pilha1: " << pilha1.top() << endl;
    cout << "Depois da troca, primeiro elemento de pilha3: " << pilha3.top() << endl;

    return 0;
}

// Elementos de pilha2: 30 20 10
// Elementos de pilha1: 30 20 10
// pilha1 ├® menor que pilha3
// Depois da troca, primeiro elemento de pilha1: 70
// Depois da troca, primeiro elemento de pilha3: 50
