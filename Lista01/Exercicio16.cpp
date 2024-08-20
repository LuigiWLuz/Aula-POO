#include <iostream>
#include <iomanip>

using namespace std;


int main(void){

    float tamArquivo, veloInternet, tempoEstimado,tempoEmin;

    cout <<"------------------------------------------------------" << endl;
    cout << "Descubra o tempo estimado de download do seu arquivo" << endl;
    cout <<"------------------------------------------------------" << endl;

    cout << "Insira o tamanho do arquivo em MB: ";
    cin >> tamArquivo;
    cout << endl;
    cout << "Insira a velocidade da internet em Mbps: ";
    cin >> veloInternet;


    tempoEstimado = (tamArquivo*8)/veloInternet;
    tempoEmin = tempoEstimado/60;

    cout << setprecision(1);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);


    if(tempoEmin < 1){
        cout << "O tempo estimado de download do seu arquivo eh de " << tempoEstimado << " segundos." << endl;
    }
    else{
        cout << "O tempo estimado de download do seu arquivo eh de " << tempoEmin << " minutos." << endl;
    }

    return 0;




}

