#include <iostream>
//Este programa recebe dois conjuntos de números e imprime os dois e também a intersecção entre eles
using namespace std;
int comparacao(int x[], int tamX, int y[], int tamY, int resultado[]){
    int tamResultado = 0;
    for (int i = 0; i < tamX; i++){
        for (int j = 0; j < tamY ; j++){
            if (x[i] == y[j]){
                resultado[tamResultado] = x[i];
                tamResultado++;
            }
        }
    }
    return tamResultado;
}
int main(){
    int m, n, elemento;
    cout << "Digite a quantidade de elementos da primeira lista: ";
    cin >> m;
    int x[m];
    cout << "Digite o os elementos de X separados por espaço";
    for (int i = 0; i < m; i++){
        cin >> elemento;
        x[i] = elemento;
    }
    cout << "Digite a quantidade de elementos da segunda lista: ";
    cin >> n;
    int y[n];
    cout << "Digite o os elementos de Y separados por espaço";
    for (int i = 0; i < n; i++){
        cin >> elemento;
        y[i] = elemento;
    }
    int tamMax;
    if (m > n){
        tamMax = n;
    }
    else {
        tamMax = m;
    }
    int resultado[tamMax];
    int tamReal = comparacao(x, m, y, n, resultado);
    cout << "\n O conjunto X é: ";
    for (int i = 0; i < m; i++){
        cout << x[i] << ", ";
    }
    cout << "\n O conjunto Y é: ";
    for (int i = 0; i < n; i++){
        cout << y[i] << ", ";
    }
    cout << "\n O conjunto interseção é: ";
    for (int i = 0; i < tamReal; i++){
        cout << resultado[i] << ", ";
    }
    return 0;
}