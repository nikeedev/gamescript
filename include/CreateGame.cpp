#include "CreateGame.h"
#include "Vector2.h"
#include "Size.h"
#include <iostream>
#include <string>



void PaintGame(Vector2* Position, char Player, Size* WorldSize) {
    std::cout << "Running Game..." << std::endl;
 	for (int j=0; j < WorldSize->height; j++) {
        	for (int i=0; i < WorldSize->width; i++) {
            		std::cout << "  ";
            		if (i == Position->x - 1) {
                		if (j == Position->y) {
                    		std::cout << Player << ' ';
                    		i += 1;
                		}
            		}
        	}
     		std::cout << "" << std::endl;
	}
}

