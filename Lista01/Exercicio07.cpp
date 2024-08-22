#include <iostream>
#include <iomanip>


using namespace std;



int main(void){


    float tempFahrenheit,tempKelvin;

    cout << "Insira a temperatura em Fahrenheit: ";
    cin >> tempFahrenheit;
    cout << endl;

    tempKelvin = ((tempFahrenheit-32) * 5/9) +273.15;

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::right);

    cout << "Temperatura Convertida em Kelvin: " << tempKelvin <<"K";


    return 0;
}
