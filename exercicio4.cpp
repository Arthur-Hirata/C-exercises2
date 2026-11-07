#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Este algoritimo simula a LOTO;
int random100(){
    return rand() % 100;

}
int main(){
    srand(time(0));
    int total_numeros = 20;
    int sorteados[total_numeros];
    int qntSorteados = 0;

    cout << "Simulador da LOTO (0 a 99)" <<endl;
    cout << "Sorteando " << total_numeros << " números" <<endl;


    while (qntSorteados < total_numeros){
        int numeroGerado = random100();
        bool repetido = false;


        for (int i = 0; i < qntSorteados ; i++){
            if (sorteados[i] == numeroGerado){
                repetido = true;
                break;
            }
        }
        if (!repetido){
            sorteados[qntSorteados] = numeroGerado;
            qntSorteados++;

        }
    }
    cout << "\n Numeros sorteados: " << endl;
    for (int i = 0; i < total_numeros; i++) {
        cout << sorteados[i] << " ";
    }
    cout << endl;

    return 0;
}