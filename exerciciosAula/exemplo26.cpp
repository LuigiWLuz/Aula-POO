//-------------------------------------------------
// Exemplo 06: exemplo de aritmética de ponteiros
//-------------------------------------------------

#include <iostream>

using namespace std;

int main(void){

    cout << "Exemplo de aritmetica de Ponteiro" << endl;

    int numeros[] = {2,5,10,1,3,21};

    int *ptr = numeros;

    cout << "1. Valor apontado: " << *ptr << endl;

    ptr++;

    cout << "2. Valor apontado: " << *ptr << endl;

    ptr++;

    cout << "3. Valor apontado: " << *ptr << endl;

    ptr++;

    cout << "4. Valor apontado: " << *ptr << endl;

    int *ptr1 = &numeros[0];
    int *ptr2 = &numeros[4];

    cout << "5. Valor apontado: " << *ptr1 << endl;
    cout << "6. Valor apontado: " << *ptr2 << endl;

    int total = ptr2 - ptr1;

    cout << "7. Valor apontado: " << total << endl;

    if(ptr1 > ptr2){
         cout << "8. aponta para um elemento mais a frente do array: " << endl;
    }
    else{
        cout << "8. aponta para um elemento mais a frente do array<ptr2> " << endl;
    }

    int *ptr3 = numeros;

    int segundoElemento = *(ptr3++);


    cout << "9. Segundo elemento do array: " << segundoElemento << endl;

}
