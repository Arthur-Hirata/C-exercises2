#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//Este programa recebe um valor em decimal e retorna seus valores em binário e hexadecimal

int binary(int decimal){
    if (decimal == 0){
        return 0;
    }
    int binarioInverso[100];
    int i = 0;
    while (decimal > 0){
        binarioInverso[i] = decimal % 2;
        decimal = decimal /2;
        i++;
    }
    int binario[100];
    int pos = 0;
    for (int j = i -1; j >=0; j-- ){
        binario[pos] = binarioInverso[j];
        pos++; 
    }
    int resultadoFinal = 0;
    for (int k = 0;  k < pos; k++){
        resultadoFinal = resultadoFinal * 10 + binario[k];
    }
    return resultadoFinal;
}
string hexadecimal(int decimal){
    if (decimal ==0){
        return "0";
    }
    char hexInverso[100];
    char LetrasHex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i = 0;
    while (decimal > 0){
        int resto = decimal % 16;
        hexInverso[i] = LetrasHex[resto];
        decimal = decimal /16;
        i++;
    }
    string HexFinal = "";
    for (int j = i -1; j>= 0;j-- ){
        HexFinal += hexInverso[j];
    }
    return HexFinal;
    


}


int main(){
    int decimal;
    cout << "Informe o número em decimal: ";
    cin >> decimal;
    cout << "\n Conversão em binário: " << binary(decimal) <<endl;
    cout << "Conversão em hexadecimal: " <<hexadecimal(decimal) <<endl;




}