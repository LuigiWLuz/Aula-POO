#include<iostream>
#include<iomanip>
using namespace std;

int main(void){

    int dadosAcidentes[5][3],j{0},indiceMin,indiceMax,cont;
    float menorEMaioresMediasTransito[2][2],soma{0},mediaVec,media,menorIndice{0},maiorIndice{0},mediaAcidentesMenoresCidades,somaMenoresCidades,mediaMenoresCidades;




    for(int i = 0; i < 5; ++i){

        cout << "==========================================================" << endl;
        cout << "                        Cidade " << i+1 << endl;
        cout << "==========================================================" << endl;

        cout << "Insira o codigo da Cidade: ";
        cin >> dadosAcidentes[i][j];
        cout << "Insira o numero de carros de passeio: ";
        cin >> dadosAcidentes[i][j+1];
        soma+=dadosAcidentes[i][j+1];
        cout << "Insira o numero de acidentes de transito com vitimas: ";
        cin >> dadosAcidentes[i][j+2];
    }


    for(int i = 0; i < 5; ++i){
       media = dadosAcidentes[i][j+1]/dadosAcidentes[i][j+2];
       if(menorIndice == 0 && maiorIndice == 0){
            menorIndice = media;
            maiorIndice = media;
            indiceMin = i;
            indiceMax = i;
       }
       else if (media > maiorIndice){
           maiorIndice = media;
           indiceMax = i;
       }
       else if ( media < menorIndice){
            menorIndice = media;
            indiceMin = i;
       }
    }


     for(int i = 0; i < 5; ++i){
        if(dadosAcidentes[i][j+1] < 2000){
            mediaMenoresCidades = dadosAcidentes[i][j+1]/dadosAcidentes[i][j+2];
            somaMenoresCidades += mediaMenoresCidades;
            ++cont;
        }

     }

    mediaMenoresCidades = somaMenoresCidades/cont;
    mediaVec = soma/5;

    cout << endl;

    cout << "Menor Indice de Acidentes: "  << menorIndice << " Codigo da cidade: " << dadosAcidentes[indiceMin][0] << endl;
    cout << "Maior Indice de Acidentes: "  << maiorIndice << " Codigo da cidade: " << dadosAcidentes[indiceMax][0] << endl;
    cout << "Media de veiculos: "  << mediaVec << endl;
    cout << "Media de Acidentes na cidades com menos de 2000 veiculos: " << mediaMenoresCidades  << endl;




}


