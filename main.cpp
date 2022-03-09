#include <iostream>
#include "include/Vector2.hpp"
#include "include/CreateGame.hpp"

using namespace std;

int main() {


  Vector2 worldSize = Vector2(5, 5);
  Vector2 position = Vector2(2, 2);

  char player = '#';

  CreateGame::PaintGame(position, player, worldSize);

  return 0;
}
