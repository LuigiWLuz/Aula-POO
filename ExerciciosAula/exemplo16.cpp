//------------------------------------------
// Exemplo 16: exemplo de uso de namespaces
//------------------------------------------

#include <iostream>
#include <iomanip>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

namespace estatistico {

    double PI = 3.141516;

    double media(const vector<double>& dados){
        double soma = 0;
        for(auto valor : dados){
            soma += valor;
        }
        return soma/dados.size();
    }

    double mediana(vector<double> dados){
        //ordena os valores do vector
        sort(dados.begin(),dados.end());
        size_t size = dados.size();

        if( size % 2 == 0){
            return (dados[size/2-1]+dados[size/2])/2;
        }
        else{
            return dados[size/2];
        }

    }

    double variancia(const vector<double>& dados){

        double m = media(dados);
        double soma = 0;

        for(auto valor : dados){
            soma += (valor - m)  * (valor - m);   /*(valor - m)  * (valor - m) */
        }
        return soma / dados.size();

    }

    double desvioPadrao(const vector<double>& dados){
        return sqrt(variancia(dados));
    }

}





int main(void){

    vector<double> dados = {2,3,3,4,5,6,7,8,9,10};

    cout << endl;
    cout << "Exemplo de utilizacao de namespaces" << endl << endl;

    //teste nequele exercixios com duvida
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "Media..: " << estatistico::media(dados) << endl;
    cout << "Mediana..: " << estatistico::mediana(dados) << endl;
    cout << "Variancia..: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padrao..: " << estatistico::desvioPadrao(dados) << endl;

    return 0;
}
