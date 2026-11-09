#include <iostream>
#include <cmath>
// Este programa calcula sen e cos
using namespace std;

float fatorial(int n){
    float fatorial = 1;

    for (int i = 1; i <= n; i++){
        fatorial  = fatorial*i;
    }
    return fatorial;
}


int main(){
    double angulo_graus, angulo_rad,sen, cos;

    cout << "Este programa calcula o seno e cosseno" <<endl;
    cout << "Digite o ângulo em graus: " <<endl;
    cin >> angulo_graus;

    angulo_rad = angulo_graus * M_PI / 180;


    int sinalSen = 1;
    sen = 0;
    // Fiz só até 15 para não estourar a memória, já que a partir disso o número fica muito pequeno;
    for (int i = 1; i <= 15; i+=2){
        sen = sen + (sinalSen * (pow(angulo_rad, i)/fatorial(i)));
        sinalSen = sinalSen * (-1);   
    }

    cos = 1;
    int sinalCos = -1;
    for (int j = 2; j < 15; j+=2){
        cos = cos + (sinalCos * (pow(angulo_rad, j)/fatorial(j)));
        sinalCos = sinalCos * (-1);
    }


    cout << "Seno e cossseno do ângulo " << angulo_graus << " são respectivamente " << endl << "Sen: " <<sen <<endl << "Cos: " << cos;

    return 0;

}