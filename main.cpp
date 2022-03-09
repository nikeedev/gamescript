#include "include/Vector2.hpp"
#include <iostream>
#include "include/CreateGame.hpp"

using namespace std;

int main() {

    
    Vector2 worldSize = Vector2::Vector2(4, 4);
    Vector2 position = Vector2::Vector2(worldSize.x/2, worldSize.y/2);
            
    char player = '#';

    CreateGame::PaintGame(position, player, worldSize);

    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}