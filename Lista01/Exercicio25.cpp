#include<iostream>
#include<cmath>

using namespace std;

int main(void){

  char resp1,resp2,resp3,resp4,resp5;
  int cont;

  do{
      cout << "Telefonou para a vitima?(S/N)";
      cin >> resp1;
       if(toupper(resp1) == 'S')
        ++cont;
  }while(toupper(resp1) != 'S' && toupper(resp1) != 'N');
  do{
      cout << "Esteve no local do crime?(S/N)";
      cin >> resp2;
       if(toupper(resp2) == 'S')
        ++cont;
  }while(toupper(resp2) != 'S' && toupper(resp2) != 'N');
  do{
      cout << "Mora perto da vitima?(S/N)";
      cin >> resp3;
       if(toupper(resp3) == 'S')
        ++cont;
  }while(toupper(resp3) != 'S' && toupper(resp3) != 'N');
  do{
      cout << "Devia para a vitima?(S/N)";
      cin >> resp4;
      if(toupper(resp4) == 'S')
        ++cont;
  }while(toupper(resp4) != 'S' && toupper(resp4) != 'N');
  do{
      cout << "Ja trabalhou com a vitima?(S/N)";
      cin >> resp5;
       if(toupper(resp5) == 'S')
        ++cont;
  }while(toupper(resp5) != 'S' && toupper(resp5) != 'N');

  if(cont == 2)
    cout << "Suspeita!";
  else if(cont >= 3 && cont <=4)
    cout << "Cumplice!";
  else if(cont == 5)
    cout << "Assasino!";
  else
    cout << "Inocente!";

  return 0;
}

