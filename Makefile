all:
	g++ main.cpp CreateGame.cpp Size.cpp Vector2.cpp Input.cpp Log.cpp -static-libgcc -static-libstdc++ -o game
