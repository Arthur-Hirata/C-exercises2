#include <iostream>
#include <stdio.h>
//Este programa junta dois arranjos em um só com seus elementos intercalados

using namespace std;

int main(){
    int n, m, k, elemento;
    cout << "Digite a quantidade de elementos do conjnto X: ";
    cin >> n;
    int x[n];
    cout << "\n Digite os elementos de X separados por espaço: ";
    for (int i = 0; i < n; i++){
        cin >> elemento;
        x[i] = elemento;
    }
    cout << "\n Digite a quantidade de elementos do conjnto Y: ";
    cin >> m;
    int y[m];
    cout << "\n Digite os elementos de Y separados por espaço: ";
    for (int i = 0; i < m; i++){
        cin >> elemento;
        y[i] = elemento;
    }
    k = m+n;
    int A[k];
    int i = 0;
    int j = 0;
    int l = 0;
    while (i < n && j < m){
        A[l++] = x[i++];
        A[l++] = y [j++];
    }
    while (i < n){
        A[l++] = x[i++];
    }
    while ( j < m){
        A[l++] = y[j++];
    }
    cout << "Conjunto X: ";
    for (int i = 0; i < n; i++){
        cout << x[i] << ", ";

    }
    cout << "Conjunto Y: ";
    for (int i = 0; i < m; i++){
        cout << y[i] << ", ";
        
    }
    cout << "Conjunto A: ";
    for (int i = 0; i < k; i++){
        cout << A[i] << ", ";
    }

}