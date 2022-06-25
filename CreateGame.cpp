#include "CreateGame.h"
#include "Vector2.h"
#include "Size.h"
#include <iostream>
#include <string>
#include <cmath>
#include "Log.h"

Log logger;

void PaintGame(Vector2* Position, char* Player, Size* WorldSize)
{
	std::cout << "Running Game..." << std::endl;
	std::cout << " ";
	for (int k = 0; k < WorldSize->width; k++) {
		std::cout << "___";
	}
	std::cout << "\n";
	for (int j = 0; j < WorldSize->height; j++)
	{
		std::cout << "|";
		for (int i = 0; i < WorldSize->width; i++)
		{
			std::cout << "  ";
			if (i == Position->x - 1)
			{
				if (j == Position->y)
				{
					std::cout << Player;
				}
				else {
					std::cout << " ";
				}
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "|";
		if (!(j > WorldSize->height - 1))
			std::cout << "\n";
	}
	std::cout << " ";
	for (int g = 0; g < WorldSize->width; g++) {
		std::cout << "---";
	}
	std::cout << "\n";
}
