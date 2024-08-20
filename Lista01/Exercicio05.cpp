#include <iostream>
#include <iomanip>
using namespace std;

int main(void){

    float tempCelsius,tempFahrenheit,tempKelvin;

    cout << "Insira a temperatura em Celsius: ";
    cin >> tempCelsius;
    cout << endl;

    tempFahrenheit = (9*tempCelsius+160)/5;
    tempKelvin = tempCelsius+273.15;

    cout << "Temperatura fornecida em Fahrenheit: " << tempFahrenheit << "F" << endl;
    cout << "Temperatura fornecida em Kelvin: " << tempKelvin <<"K";
}
