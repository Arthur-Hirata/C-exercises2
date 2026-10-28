#include <iostream>
#include <stdio.h>
using namespace std;

// Este programa imprime a quantidade de vezes que cada número aparece em um arranjo

int main(){
    int n, quantidade;
    double numero,numero_contado;
    cout << "Digite a quantidade de caractres: ";
    cin >> n;
    double nums[n] = {0};
    for (int i=0; i <n; i++){
        cout << "Digite o número: ";
        cin >> numero;
        nums[i] = numero;
    }
    cout << "Valor\tFrequência" << endl;

    for (int j = 0; j < n; j++){
        bool jaContado = false;
        for (int a = 0; a <j; a++){
            if (nums[a] ==nums [j]){
                jaContado = true;
                break;
            }
        }
        if (jaContado){
            continue;
        }
        quantidade = 0;
        for (int k = 0; k <n; k++){
            if (nums[k] == nums[j]){
                quantidade++;
            }
        }
        cout << nums[j] <<  "\t" << quantidade <<endl;
    }

}