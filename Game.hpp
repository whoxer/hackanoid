#include <iostream>

using namespace std;

class Game {
	public:
		Game();
		~Game();
		void gameStart(int game_state, bool game_running);
	private:
		int p_game_state, save_code;
		bool p_game_running;
		char opt;
}
