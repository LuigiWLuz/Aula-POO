#include <iostream>
#include <sstream>
using namespace std;

bool validaData(string diaStr,string mesStr,string anoStr){

     if(stoi(diaStr) > 0 && stoi(diaStr) < 32){
        if(stoi(mesStr) > 0 && stoi(mesStr) < 13){
            if(stoi(anoStr) > 0 && stoi(anoStr) < 2025){
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

int main(void){

    string data,converte,diaStr,mesStr,anoStr;

    cout << "Insira uma data neste formato(dd/mm/aaaa): ";
    cin >> data;


    diaStr = data.substr(0,data.find("/"));
    mesStr = data.substr(3,data.find("/"));
    anoStr = data.substr(6,data.find(" "));

    if(validaData(diaStr,mesStr,anoStr))
        cout << "Data Valida!";
    else
        cout << "Data Invalida";


}
