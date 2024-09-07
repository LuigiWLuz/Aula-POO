#include<iostream>

using namespace std;

char positivoOunegativo(int num){
    return num>0?'P': 'N';
}

int main(void){

    int num;
    do{
        cout << "Insira um numero:";
        cin >> num;
    }while(num == 0);
    cout << "O numero informado retornou: " << positivoOunegativo(num);
}
