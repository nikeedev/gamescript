
src_files := main.cpp include/CreateGame.cpp include/Vector2.cpp include/Input.cpp include/Log.cpp

all:
	g++ -Iinclude $(src_files) -o game
