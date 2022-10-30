
src_files := src/main.cpp src/CreateGame.cpp src/Vector2.cpp src/Input.cpp src/Log.cpp

all:
	clang++ $(src_files) -o build/mingw/game
