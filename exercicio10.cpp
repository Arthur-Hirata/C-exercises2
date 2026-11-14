#include <iostream>
//– Suponha um conjunto de 5 cidades. Suponha as cidades com os seguintes nomes: A, B, C, D e E. As distâncias entre cada uma das cidades podem ser definidas por uma tabela do tipo:

using namespace std;
//essas funções convertem o nome da cidade para o índice dela e vice-versa;
int charParaIndice(char c) {
    return c - 'a';
}
char indiceParaChar(int i) {
    return 'a' + i;
}
int main(){
    int cidades[5][5] = {0};
    cout << "Digite a distância entre as cidades: ";
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5 ; j++){
            char cidadeOrigem = indiceParaChar(i);
            char cidadeDestino = indiceParaChar(j); 


            cout << "Qual é a distância entre a cidade " << cidadeOrigem << " e a cidade " << cidadeDestino <<endl;
            cin >> cidades[i][j];
            cidades[j][i]=cidades[i][j];
        }
    }
    cout << "Tabela das cidades: " <<endl;
    cout << "\t";
    for (int j = 0; j < 5; j++){
        cout << indiceParaChar(j) << "\t";
    }
    cout <<endl;

    for (int i = 0; i < 5 ; i++){
        cout << indiceParaChar(i) << "\t";
        for (int j = 0; j < 5 ; j++){
            cout << cidades[i][j] << "\t";
        }
        cout <<endl;
    }
    cout << "\n Digite as cidades com que quer saber a distância separados por espaço: ";
    int cidadesBuscadas[2];
    char cidade;
    for (int i = 0; i < 2; i++){
        cin >> cidade;
        int indiceCidade = charParaIndice(cidade);
        cidadesBuscadas[i] = indiceCidade;
    }
    int cidade1 = cidadesBuscadas[0];
    int cidade2 = cidadesBuscadas[1];
    
    cout << "\n A distância entre as cidades " << indiceParaChar(cidade1) << " e a cidade " << indiceParaChar(cidade2) << " é de " << cidades[cidade1][cidade2];

    int menorValor = 1000000;

    
    for (int i = 0; i <5; i++){
        for (int j = i+1; j  < 5; j++){
            if (cidades[i][j] < menorValor){
                menorValor = cidades[i][j];
                cidade1 = i;
                cidade2= j;
            }
        }        
    }

    cout << "\n As cidades mais próximas são: " << indiceParaChar(cidade1) << " e " << indiceParaChar(cidade2) << " e é de: " << menorValor <<"Km";


    string percusso;
    cout << "\n Digite o percusso a ser pecorrido em letras minúsculas e juntas (Ex:abcadc): ";
    cin >> percusso;
    int distancia =0;


    for (int i = 0; i < percusso.length() - 1; i++){
        int origem = charParaIndice(percusso[i]);
        int destino = charParaIndice(percusso[i+1]);

        distancia += cidades[origem][destino];
    }

    cout << "\n O percusso total percorrido foi de: " << distancia <<"Km";

    cout << "\n Relatório das cidades." <<endl;
    cout << "\nCIDADE\tCIDADE\tDISTÂNCIA" << endl;
    for (int i = 0; i < 5 ; i++){
        for (int j = i+1; j < 5 ; j++){
            cout << indiceParaChar(i) << "\t" << indiceParaChar(j) << "\t" << cidades[i][j] <<endl;
        }
    }






}