#include<iostream>
using namespace std;

int main(void){

    int anosNecessarios{0},countryA{80000},countryB{200000};

    do{
        countryA = countryA + (countryA * 0.03);
        countryB = countryB + (countryB * 0.015);
        ++anosNecessarios;
    }while(countryA < countryB);

    cout << "Pais A : " << countryA << endl;
    cout << "Pais B : " << countryB << endl;
    cout << "Anos necessarios: " << anosNecessarios;

}
