#include <iostream>
#include "Log.h"
#include "Input.h"

std::string GotKey;

std::string Input::GetKey(std::string info) {
	std::cout << info;
	std::cin >> GotKey;


	return GotKey;
}

