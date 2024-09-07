#include<iostream>
using namespace std;

int main(void){

    int idade = 25;
    int *idadePtr;

    idadePtr = &idade;

    cout << *idadePtr;



}

