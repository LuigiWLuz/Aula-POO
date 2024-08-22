#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main(void){

    float PI,raio,densidade,peso;
    PI = 3.141516;

    cout << "Insira a densidade da esfera: ";
    cin >> densidade;
    cout << "Insira o raio da esfera: ";
    cin >> raio;

    peso = densidade*(4*PI*pow(raio,3)/3);

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);


    cout << "A esfera pesa " << peso << " Kg";

    return 0;
}


