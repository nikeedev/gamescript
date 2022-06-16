#include "CreateGame.hpp"
#include "Vector2.hpp"
#include <iostream>
#include <string>

using namespace std;

void PaintGame(Vector2 Position, char Player, Vector2 WorldSize) {
    cout << "Running Game..." << endl;
 	for (int j=0; j < WorldSize.y; j++) {
        	for (int i=0; i < WorldSize.x; i++) {
            		cout << "  ";
            		if (i == Position.x - 1) {
                		if (j == Position.y) {
                    			cout << Player << ' ';
                    			i += 1;
                		}
            		}
        	}
     		cout << "" << endl;
	}
}

