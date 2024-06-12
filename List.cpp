#include <iostream>
#include <list>
using namespace std;

int main (){
    list<int> lst1; // lista inicial sem elementos
    list<int> lst2(10, 0); // lista com 10 elementos preenchidos com zeros
    list<int> lst3(lst2); // lista 3 igual à lista 2
    list<int> lst4 = {1, 2, 3, 4};

    // Itera sobre lst4 e imprime os elementos separados por espaço
    for (auto it = lst4.begin(); it != lst4.end(); it++){
        cout << *it;
        if (next(it) != lst4.end()){ // Verifica se não é o último elemento
            cout << " ";
        }
    }

    cout << endl;
    cout << "Tamanho: " << lst4.size() << endl;
    cout << "Capacidade máxima: " << lst4.max_size() << endl;
    cout << "Primeiro elemento: " << lst4.front() << endl;
    cout << "Último elemento: " << lst4.back() << endl;

    // Verifica se a lista lst4 está vazia
    if(lst4.empty()){
        cout << "Lista vazia" << endl;
    } else{
        cout << "Lista não está vazia" << endl;
    }

    lst1 = {1, 2, 3, 4};
    list<int> lst;

    // Atribui os elementos de lst1 para lst
    lst.assign(lst1.begin(), lst1.end());

    // Inserção no final e no começo de lst1
    lst1.push_back(8);
    lst1.push_front(9);

    // Inserção em qualquer lugar na lista lst1
    list<int>::iterator it = lst1.begin(); // obtém o endereço do início
    ++it; // avança o iterator para o segundo elemento
    lst1.insert(it, 8); // insere o valor 8 no segundo lugar

    // Remoção do final e do começo de lst1
    lst1.pop_back();
    lst1.pop_front();

    while(!lst1.empty()){
         lst1.pop_back(); //ou front
    }
    // Remove todos os elementos de lst1
    lst1.clear();

    // Remove o elemento no segundo lugar de lst1
    it = lst1.begin(); // obtém o endereço do início
    ++it; // avança o iterator para o segundo elemento
    lst1.erase(it); // remove o elemento no segundo lugar

    // Remove todos os elementos com o valor 0 de lst1
    lst1 = {0, 0, 0, 0, 1, 2, 3, 4, 0, 0, 0};
    lst1.remove(0);
    lst1 = {1, 2, 3, 4};

    // Ordena e reverte a lista lst1
    lst1.sort();
    lst1.reverse();

    // Remove elementos duplicados de lst1
    lst1.unique();

    // Mescla lst1 com lst2 e ordena
    lst1.merge(lst2);

    // Troca o conteúdo de lst1 com lst2 e redimensiona lst2 para 3 elementos
    lst1.swap(lst2);
    lst2.resize(3);

    // Limpa todos os elementos de lst1
    lst1.clear();

    // Imprime os elementos de lst1 separados por espaço
    for(auto x : lst1){
        cout << x;
        if (x != lst1.back()){ // Verifica se não é o último elemento
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
