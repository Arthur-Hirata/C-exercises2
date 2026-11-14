#include <iostream>
//Este programa confere se uma matriz é um quadrado perfeito

using namespace std;

int main(){
    int linhas, colunas, elemento;
    cout << "Digite o número de linhas da matriz: ";
    cin >> linhas;
    cout << "Digite o número de colunas da matriz: ";
    cin >> colunas;
    if (linhas !=colunas){
        cout << "O número de lihas deve ser igual ao número de colunas para que uma matriz possa ser considerada quadrado mágico";
        return 0;
    }
    int matriz[linhas][colunas];
    cout << "\n Digite os elementos da matriz";
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Digite o elemento A"<<i +1<<j +1 <<": ";
            cin >> elemento;
            matriz[i][j] = elemento;
        }
    }


    int somaAtual = 0;
    for (int j = 0; j< colunas; j++){
        somaAtual += matriz[0][j]; 
    }

    int somaBuscada = somaAtual;
    for (int i = 1; i < linhas; i++){
        somaAtual = 0;
        for (int j = 0; j < colunas ; j++){
            somaAtual += matriz[i][j];
        }
       if (somaAtual != somaBuscada) {
            cout << "A matriz não é um quadrado mágico";
            return 0;
        }
    }
    for (int j = 0; j < colunas;  j++){
        somaAtual = 0;
        for (int i = 0; i < linhas ; i++){
            somaAtual += matriz[i][j];
        }
        
        if (somaAtual != somaBuscada) {
            cout << "A matriz não é um quadrado mágico";
            return 0;
        }
    }
    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < linhas; i++){
        somaDiagonalPrincipal += matriz[i][i];

    }
    if (somaDiagonalPrincipal != somaBuscada){
        cout << "A matriz não é um quadrado magico";
        return 0;
    }
    int somaDiagonalSecundaria = 0;
    for (int i = 0; i < linhas ; i++){
        somaDiagonalSecundaria += matriz[i][colunas - 1 - i];
    }
    if (somaDiagonalSecundaria != somaBuscada){
        cout << "A matriz não é um quadrado magico";
        return 0;
    }
    cout << "A matriz é um quadrado mágico";
}