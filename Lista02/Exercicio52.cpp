#include<iostream>
#include<iomanip>

using namespace std;

int main(void){

    int n,m{1};

    cout << "Insira o valor de N:";
    cin >> n;

   // cout << setiosflags(ios::fixed);
   // cout << setiosflags(ios::left);
    cout << endl;
    for(int i = 0; i < n; ++i){
        if(i == 0)
            cout <<"     " << i+1 << setw(3);
        else
            cout <<" " << i+1 << setw(3);
    }
    cout << endl;
    cout << "S = ";
    for(int i = 0; i < n; ++i){
      if(i < n-1)
        cout << setw(2) << "-" << setw(2) << "+" << setw(2);
      else
        cout << setw(2) << "-" << setw(2) << setw(2);
    }
    cout << endl;
    for(int i = 0; i < n; ++i){
        if(i == 0)
            cout <<"     " << m << setw(4);
        else
            cout << m << setw(4);
            m+=2;

    }


}


