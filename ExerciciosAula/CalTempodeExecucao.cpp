#include<iostream>
using namespace std;

int main(void){

    int cont{0},n{5},j{0},k{0};

    for(int i = n/2; i<=n;++i){
       j = 1;
       while(j+(n/2)<=n){
          k = 1;
          while(k <= n){
             ++cont;
             k*=2;
             ++j;
          }
       }
    }
    cout << cont;
}
