#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    while (n--){
        string resp = ""; // Inicializa resp como uma string vazia
        int maior = 0;
        string frase;
        getline(cin,frase); //pega a string até o \n
        
        map<char, int> freq; // Usamos um mapa para contar a frequência de cada letra
        // map já coloca em ordem
        
        for (char c : frase){
            if (isalpha(c)){
                c = tolower(c); // Convertemos para minúscula para considerar 'C' e 'c' como iguais
                freq[c]++; // Incrementamos a contagem para o caractere c
                if (freq[c] > maior) {
                    maior = freq[c]; // Atualizamos a maior contagem se necessário
                }
            }
        }

        for (auto& pair : freq){
            if (pair.second == maior) {
                resp += pair.first; // Adicionamos a letra à resposta se sua contagem for igual à maior
            }
        }
        cout << resp << endl;
    }

    return 0;
}
