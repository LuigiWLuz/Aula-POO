//exemplo19: total de um array estatico

#include<iostream>
using namespace std;

int main(void){

    int array[] = {1,2,3,4,5}, total = sizeof(array)/sizeof(array[0]);

    cout << "Total de elementos: " << total;

}
