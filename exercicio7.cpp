#include <iostream>

#include <string>
//Este programa calcula isso: Para cada empresa que produz televisores tem-se o seu nome e as quantidades de TVs produzidas em cada mês do ano.
//imprima o nome da empresa que mais produziu no mês de agosto;
// para a empresa de maior produção anual imprima o seu nome e mês (por extenso) que menos produziu;
// imprima o seguinte relatório:

using namespace std;
int main(){
    int N;
    cout << "\n Informe a quantidade de empresas: ";
    cin >> N;
    string meses [12]= {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    string empresas[N];
    int producao[N][12];
    for (int i = 0; i < N ; i++){
        cout << "\n Informe o nome da empresa: ";
        cin >> empresas[i];

        for (int j = 0; j < 12; j++){
            cout << "\n Informe a quantidade de TV's no mês " << meses[j] <<": ";
            cin >> producao[i][j];
        }
    }

    int maiorProdAgosto = producao[0][7];
    int empresaMaiorProdAgosto = 0;;

    for (int i = 0; i < N ; i++){
        if (producao[i][7] > maiorProdAgosto){
            maiorProdAgosto = producao[i][7];
            empresaMaiorProdAgosto = i;
        }
    }
    cout << "\n A empresa de maior produção no mês de agosto foi: " << empresas[empresaMaiorProdAgosto];

}