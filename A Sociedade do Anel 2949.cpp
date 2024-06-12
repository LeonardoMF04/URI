#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int contX=0,contM=0,contH=0,contE=0,contA=0;
    while (n--){
        string nome;
        char genero;
        cin >> nome >> genero;
        if (genero == 'X'){
            contX++;
        }
        if (genero == 'M'){
            contM++;
        }
        if (genero == 'H'){
            contH++;
        }
        if (genero == 'A'){
            contA++;
        }
        if (genero == 'E'){
            contE++;
        }
    }
    cout << contX <<  " " << "Hobbit(s)" << endl;
    cout << contH <<  " " <<  "Humano(s)" << endl;
    cout << contE <<  " " <<  "Elfo(s)" << endl;
    cout << contA <<  " " <<  "Anao(oes)" << endl;
    cout << contM <<  " " <<  "Mago(s)" << endl;

    return 0;
}
