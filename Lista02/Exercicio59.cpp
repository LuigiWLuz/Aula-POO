#include<iostream>
using namespace std;

int main(void){

   int num;

   cout << "Insira um numero: ";
   cin >> num;

   cout << "Por quais numeros " << num <<" eh divisivel?" << endl;
   for(int i = 1; i <= num; ++i){
      if(num%i==0){
        if(i < num)
            cout << i << ", ";
        else
            cout << i;
      }


   }

}

