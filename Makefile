
src_files := main.cpp src/CreateGame.cpp src/Vector2.cpp src/Input.cpp src/Log.cpp

all:
	g++ -Isrc $(src_files) -o build/game
