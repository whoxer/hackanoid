#include <iostream>

using namespace std;

int checkStateCode(int code);
void checkWhichStateUR(int state);

class Game {
	public:
		Game();
		~Game();
		void startGame(int game_state, bool game_running);
	private:
		int p_game_state, save_code;
		bool p_game_running;
		char opt;
};
