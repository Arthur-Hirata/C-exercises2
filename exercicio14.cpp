#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

//Este programa recebe um número em binário e calcula se correspondente em decimal

int main(){
    int i, valorFinal, tam;
    string numero;
    cout << "Digite o valor do número em binário: ";
    cin >> numero;

    tam = numero.length();
    valorFinal = 0;
    int cont = 0;
    for (i = tam -1; i >=0 ; i--){
        int digito = numero[i] - '0';
        valorFinal += digito * pow(2, cont);
        cont++;
    }
    cout << "O valor em decimal é " << valorFinal;
    return 0;
}
