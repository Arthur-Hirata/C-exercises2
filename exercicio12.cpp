#include <iostream>
#include <stdio.h>
using namespace std;
//Este programa calcula x elevado a y

int main(){
    int x, y, cont, result;
    cout << "Esse programa calucula o valor de X elevado a Y";
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y (Y maior ou igual a 0): ";
    cin >> y;
    if (y < 0 ){
        cout << "O valor de Y não pode ser menor que 0";
        return 0;
    }
    result = 1;
    for (cont = 1; cont <=y; cont++){
        result = result * x;
    }

    cout << "O valor resultante é: " << result << endl;

}