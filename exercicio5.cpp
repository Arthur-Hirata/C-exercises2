#include <iostream>
#include <stdio.h>
using namespace std;
//Este programa deixa uma lista de valores em ordem, adicionando uma a mais

int main(){
    int y, numero, quantidade, posicao;
    bool encontrado;
    cout << "Digite o número de elementos no conjunto X: ";
    cin >> quantidade;
    int x[quantidade +1];
    std::cout << "Digite os " << quantidade << " numeros em ordem crescente (separados por espaco ou enter):\n";
    for (int i = 0; i<quantidade; i++){
        std::cin >> numero;
        x[i]= numero;
    }
    cout << "Digite o valor de Y: ";
    cin >> y;
    encontrado = false;
    posicao = quantidade;
    for (int j = 0; j < quantidade ; j++){
        if (x[j] ==y){
            encontrado = true;
            break;
        }
        if (x[j]>y){
            posicao = j;
            break;
        }
    }
    if (encontrado){
        cout << y << " está contido na lista X";
    }
    else {
        for (int k = quantidade; k > posicao ;k--){
            x[k] = x[k-1];
        }
        x[posicao] = y;
        quantidade++;
        cout << y << " não estava na lista e foi inserido";
    }



    cout << "Lista X final: ";
    for (int i = 0; i < quantidade; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;

}