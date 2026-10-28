#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

//Este programa transfere os valores de base 8 para base 10

int main(){
    int n, quantidade;
    string numero;
    cout << "Digite a quantidade de valores N: ";
    cin >> n;
    string nums[n];
    for (int i =0; i <n ; i++){
        cout << "Digite o valor a ser inserido: ";
        cin >> numero;
        nums[i] = numero;
    }
    cout << "\n--- RESULTADOS ---\n";
    for (int j = 0; j< n ; j++){
        string num_atual = nums[j];
        quantidade = num_atual.size();
        int potencia = 0;
        int valor_decimal = 0;
        for (int k = quantidade -1; k>= 0 ; k--){
            int digito = num_atual[k] - '0';
            valor_decimal += digito * pow(8,potencia);
            potencia++;
        }
        cout << "Base 8: " << num_atual << "Base 10: " << valor_decimal <<endl;


    }

    return 0;
}