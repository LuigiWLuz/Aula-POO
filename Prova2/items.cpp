#include "items.hpp"
#include <cstdlib>

using namespace std;

// Diretório global da aplicação
extern char *appDir;

// Inicializa os dados de um novo item
items::items() {
    texture = LoadTexture(TextFormat("%s/assets/images/item.png", appDir));
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(50, GetScreenHeight() - texture.height);
    radius = 30.0f;
    scoreValue = GetRandomValue(10, 50);
}

// Libera a memória utilizada na textura
items::~items() {
    UnloadTexture(texture);
}


// Verifica se houve uma colisão
bool items::checkCollision(const Player& player) const {
    return CheckCollisionCircles(
        {position.x + texture.width / 2.0f, position.y + texture.height / 2.0f},
        radius,
        player.getPosition(),
        player.getRadius()
    );
}

void items::Draw() const {
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

int Items::getValorItem() const {
    return valorAocoletarItem;
}