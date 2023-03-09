#include "Log.h"
#include <iostream>


template <typename T>
void Log(T message)
{
	std::cout << message << std::endl;
}
