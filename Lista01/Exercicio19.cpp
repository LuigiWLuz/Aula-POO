#include <iostream>

using namespace std;


int main(void){

    char vogais[] = {'a','e','i','o','u'};
    char letra;
    int i = 0;

    cout << "Insira a letra: ";
    cin >> letra;

    for(int j = 0; j<5;++j){
        if(letra == vogais[j]){
            cout << "Vogal";
            ++i;
        }
    }
    if(i == 0)
        cout << "Consoante";

}
