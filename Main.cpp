#include "Game.hpp"
#include <iostream>

int main(void) {
	int state = -1;
	bool is_running = true;

	Game newgame;

	newgame.startGame(state, is_running);

	return 0;
}
