#include <iostream>
#include "include/Vector2.hpp"
#include "include/CreateGame.hpp"

using namespace std;

int main() {


	Vector2 worldSize(5, 5);
	Vector2 position(2, 2);

  	char player = '#';
	
	
  	PaintGame(position, player, worldSize);
	
	std::cout << "\n";

  	return 0;
}
