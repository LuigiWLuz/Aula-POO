#include<iostream>
using namespace std;

int main(void){

     int num;
     cout << "Insira um numero: ";
     cin >> num;

     cout << "Tabuada do " << num << ":" << endl;

     for(int i = 1; i <= 10; ++i)
        cout << num << " X " << i << " = " << num*i << endl;

}

