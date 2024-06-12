#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    long long int n;
    long long int contador = 4;
    cin >> n;

    for (int k = 0; k < n; k++) {
        long long int M;
        cin >> M;
        unsigned  long long int Matrix[M][M];

        // Lendo a matriz e calculando o quadrado ao mesmo tempo
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                cin >> Matrix[i][j];
                Matrix[i][j] *= Matrix[i][j];
            }
        }

        cout << "Quadrado da matriz #" << contador << ":" << endl;
        contador++;

        // Encontrando o maior número em cada coluna
        vector<unsigned  long long int> max_coluna(M, 0);
        for (int j = 0; j < M; j++) {
            for (int i = 0; i < M; i++) {
                max_coluna[j] = max(max_coluna[j], Matrix[i][j]);
            }
        }

        // Determinando a largura de impressão para cada coluna
        vector<unsigned long long int> largura_coluna(M, 0);
        for (int j = 0; j < M; j++) {
            largura_coluna[j] = 1 + floor(log10(max_coluna[j]));
        }

        // Imprimindo a matriz com a largura apropriada
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) {
                cout << setw(largura_coluna[j]) << Matrix[i][j];
                if (j != M - 1) {
                    cout << " "; //se não for a ultima coluna da matrix, pula
                }
            }
            cout << endl;
        }

        if (k < n - 1) { //se há mais matrizes para serem processadas, pula linha.
            cout << endl;
        }
    }

    return 0;
}
