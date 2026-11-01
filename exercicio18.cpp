#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

//Este exercicio recebe uma matriz e escreve sua transposta;
int main(){
    int linhas, colunas;
    cout << "Digite o número de linhas da Matriz: ";
    cin >> linhas;
    cout << "Digite o número de colunas da Matriz: ";
    cin >> colunas;
    vector<vector<int>>matriz(linhas, vector<int>(colunas));
    for (int i  = 0; i <linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Digite o elemento A " <<i<<j<<": ";
            cin >> matriz[i][j];
        }
    }


    vector<vector<int>>transposta(colunas, vector<int>(linhas));

    for (int i = 0; i < linhas; i++){
        for (int j= 0; j<colunas; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "\n Matriz normal: " <<endl;
    for (int i = 0; i < linhas ; i++){
        for (int j = 0; j < colunas ; j++){
            cout << matriz[i][j] << "";
        }
        cout <<endl;
    }
    cout << "\n Matriz transposta: " <<endl;
    for (int i = 0; i < colunas; i++) { 
        for (int j = 0; j < linhas; j++) { 
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}