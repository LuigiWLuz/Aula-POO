#include <raylib.h>
#include "player.hpp"
#include <iostream>

using namespace std;


class items {
        

    private:
        //armazenará twxtura do item
        Texture2D texture;               
        //varialvel no qual aramazena a posição do item
        Vector2 position;    
         // Raio para calcular a colisão            
        float radius;  
         // Valor da pontuação ao coletar o item                 
        int valorAocoletarItem;                 

    public:

        //construtor
        items();         
        //destrutor                 
        ~items();     
        //"desenha" o item na tela                  
        void Draw() const;            
        //este metodo checa a colisão do jogador   
        bool checkCollision(const Player& player) const; 
        // Retorna o valor do item
        int getValorItem() const;   
};

#endif