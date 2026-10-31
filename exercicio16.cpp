#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

// Este programa recebe um vetor e retorna outro vetor trocando o primeiro elemento com o final, o segundo com o penultimo e assim por diante
// Neste caso usei o int*, pois é mais fácil de manipular o vetor inverso já que ele guarda o endereço de memória do vetro inical e também porque o C++ não permite retornar o vetor inverso;


int* vetorInverso(int vetor[], int tam){
    int* inverso = new int[tam];
    int posicao = 0;
    for (int i= tam-1; i >=0; i--){
        inverso[posicao] = vetor[i];
        posicao++;
    }
    return inverso;



}

int main(){
    int tam, elemento;
    cout << "Digite o tamanho do vetor";
    cin >> tam;
    int vetor[tam];
    cout << "Digite os termos do vetor separados por espaço: " <<endl;
    for (int i = 0; i<tam; i++){
        cin >> elemento;
        vetor[i] = elemento;
    }
    cout << "Vetor normal: " << endl;
    for (int k = 0; k < tam; k++){
        cout << vetor[k] << "";
    }
    int* resultado = vetorInverso(vetor, tam);
    cout << "\n Vetor inverso: " <<endl;
    for (int j= 0; j < tam; j++){
        cout << resultado[j] << "";
    }

}