#include "CreateGame.h"
#include "Vector2.h"
#include "Size.h"
#include <iostream>
#include <string>

using namespace std;


void PaintGame(Vector2* Position, char Player, Size* WorldSize)
{
	cout << "Running Game..." << endl;
	for (int j = 0; j < WorldSize->height; j++)
	{
		for (int i = 0; i < WorldSize->width; i++)
		{
			cout << "  ";
			if (i == Position->x - 1)
			{
				if (j == Position->y)
				{
					cout << Player << ' ';
					i += 1;
				}
			}
		}
		cout << "" << endl;
	}
}
