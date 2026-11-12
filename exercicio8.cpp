#include <iostream>
#include <string>
//Este programa calculo o custo de fabricação por mês de motores
using namespace std;

int main(){
    int N;
    cout << "\n Informe a quantidade de motores: ";
    cin >> N;
    string meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    int MotoresMeses[12][N];

    float CustoVenda[N][2];
    cout << "Preenchimento da tabela de produção mensal";
    for (int i = 0; i < 12; i++){
        cout << "Mes de " << meses[i] <<":"<<endl;
        for (int j = 0; j< N; j++ ){
            cout << "Quantidade do motor" << j+1 <<endl;
            cin >> MotoresMeses[i][j];
        }
    }

    cout << "Preenchimento da tabela de custo e venda";
    for (int j = 0; j < N; j++){
        cout << "Motor" << j+1<<endl;
        cout << "Custo de fabricação: ";
        cin >> CustoVenda[j][0];
        cout << "Preco de venda: ";
        cin >> CustoVenda[j][1];
    }

    cout << "\nMês\t\tCusto\tReceita bruta\tReceita liquida" << endl;
    
    for (int i = 0; i < 12; i++){
        float custoMes =0;
        float receitaBruta = 0;
        for (int j = 0; j < N; j++){
            custoMes += MotoresMeses[i][j] * CustoVenda[j][0];
            receitaBruta += MotoresMeses[i][j] * CustoVenda[j][1];
        }
        float receitaLiquida = receitaBruta -custoMes;
                cout << meses[i] << "\t\t" 
             << custoMes << "\t" 
             << receitaBruta << "\t\t" 
             << receitaLiquida << endl;
    }

    return 0;
    
}