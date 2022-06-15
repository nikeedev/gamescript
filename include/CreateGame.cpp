#include <iostream>
#include <string>
#include "Vector2.hpp"
#include "Size.hpp"
#include "CreateGame.hpp"

using namespace std;

void PaintGame(Vector2 Position, char Player, Size WorldSize)
{
	cout << "Running Game..." << endl;
	for (int j = 0; j < WorldSize.height; j++)
	{
		for (int i = 0; i < WorldSize.width; i++)
		{
			cout << "  ";
			if (i == Position.x - 1)
			{
				if (j == Position.y)
				{
					cout << Player << ' ';
					i += 1;
				}
			}
		}
		cout << "" << endl;
	}
}
