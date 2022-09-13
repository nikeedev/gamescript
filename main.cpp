#include <iostream>
#include "Vector2.h"
#include "CreateGame.h"
#include "Log.h"
#include "Input.h"
#include <stdlib.h>




int main()
{

	Log logger;
	Vector2 worldSize(10, 10);
	Vector2 position(5, 5);
	bool running = true;
	std::string key;

	char* player = "#";
	
	while (running) {
		system("cls");

		PaintGame(position, player, worldSize);

		std::cout << "\n"; 
		std::cout << "X: " << position.x << ", Y: " << position.y << std::endl;
		std::cout << "\n";

		key = GetKey("Write up/u / down/d / left/l / right/r or exit to exit :) : ");

		if (!position.y <= 0)	
			if (key == "up" || key == "u")
				position.y -= 1;
		else
			position.y += 1;


		if (!position.y >= worldSize.y)
			if (key == "down" || key == "d")
				position.y += 1;
		else
			position.y -= 1;



		if (!position.x >= worldSize.x)
			if (key == "right" || key == "r")
				position.x += 1;	
		else
			position.x -= 1;


		if (!position.x <= 0)
			if (key == "left" || key == "l")
				position.x -= 1;
		else
			position.x += 1;

		if (key == "exit" || key == "e")
			running = false;

		else
			continue;
		
		
	}

	logger.LogInfo("\nGame Finished");

	std::cin.get();

	return 0;
}
