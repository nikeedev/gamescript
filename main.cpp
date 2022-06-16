#include <iostream>
#include "include/Vector2.hpp"
#include "include/Size.hpp"
#include "include/CreateGame.hpp"


using namespace std;

int main() {


	Size* worldSize = new Size(5, 5);
	Vector2* position = new Vector2(2, 2);


  	char player = '#';

  	PaintGame(position, player, worldSize);

	cout << "\nGame Finished";

	cin.get();

  	return 0;
}
