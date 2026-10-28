#include <iostream>
#include <string>
//Este programa imprime a posição do primeiro elemento negativo dado um arranjo de elementos
using namespace std;
int main (){
    int n, numero;
    cout << "Digite a quantidade de caractres: ";
    cin >> n;
    int nums[n] = {0};
    for (int cont = 0; cont < n; cont++){
        cout << "Digite o número: ";
        cin >> numero;
        nums[cont] = numero;
    }

    for (int i = 0; i < n;i++){
        if (nums[i] < 0){
            cout << "A posição do primeiro número negativo é: " << i+1 << endl;
            return 0;
        }

    }
    cout << "Não há nenhum número negativo na sequência!";


}