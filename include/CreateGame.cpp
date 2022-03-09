#include "CreateGame.hpp"
#include "Vector2.hpp"
#include <iostream>
#include <string>

static void PaintGame(Vector2 Position, char Player, Vector2 WorldSize) {
    for (int j=0; j < WorldSize.y; j++) {
        for (int i=0; i < WorldSize.x; i++) {
            std::cout << "  ";
            if (i == Position.x - 1) {
                if (j == Position.y) {
                    std::cout << Player + ' ';
                    i += 1;
                }
            }
        }
        std::cout << "" << endl;
    }
}