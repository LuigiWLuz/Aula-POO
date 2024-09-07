#include<iostream>
#include<iomanip>

using namespace std;

void apresentaPadrao(int num){

    int cont;

    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::left);

    for(int i = 1; i <= num; ++i){
        cont = 1;
        while(cont <= i){
           cout <<  i << setw(2);
           ++cont;
        }
        cout << endl;
    }

}

int main(void){

    int num;

    cout << "Insira um numero:";
    cin >> num;

    apresentaPadrao(num);


}
