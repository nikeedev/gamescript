
src_files := src/main.cpp src/CreateGame.cpp src/Vector2.cpp src/Input.cpp 

all:
	clang++ -std=c++20 $(src_files) -o build/mingw/game


