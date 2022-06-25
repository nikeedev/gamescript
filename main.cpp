#include <iostream>
#include "Vector2.h"
#include "Size.h"
#include "CreateGame.h"
#include "Log.h"
#include "Input.h"
#include <stdlib.h>




int main() {

	Log logger;
	Size* worldSize = new Size(10, 10);
	Vector2* position = new Vector2(4, 4);
	bool running = true;
	std::string key;

	char* player = "#";
	
	while (running) {
		system("CLS");

		PaintGame(position, player, worldSize);

		std::cout << "\n";
		key = Input::GetKey("Write up/u / down/d / left/l / right/r or exit to exit :) : ");
		
		if (key == "up" && key == "u")
			position->y--;

		else if (key == "down" && key == "d")
			position->y++;
		
		else if (key == "right" && key == "r")
			position->x++;

		else if (key == "left" && key == "l")
			position->x--;

		else if (key == "exit")
			running = false;

		else
			continue;
		
	}

	logger.LogInfo("\nGame Finished");

	std::cin.get();

	return 0;
}
