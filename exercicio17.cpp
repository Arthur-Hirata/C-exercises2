#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// Este programa determina se a palavra é um palindromo

int palindrome(string palavra, int tam){
    int i;
    string invertida;
    for (i = tam - 1; i >=0 ; i--){
        invertida += palavra[i];
    }
    if (palavra == invertida){
        return true;
    }
    else {
        return false;
    }



}
int main(){
    string palavra;
    bool testePalindromo;
    int tam;
    cout << "Digite a palvara para a ser verficada como palindromo: ";
    cin >> palavra;
    tam  = palavra.length();
    testePalindromo = palindrome(palavra, tam);
    if (testePalindromo){
        cout << "A palavra " << palavra << " é um palindromo";
    }else{
        cout << "A palavra " << palavra << " não é um palindromo";
    }
    return 0;
}