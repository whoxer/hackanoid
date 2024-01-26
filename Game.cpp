#include "Game.hpp"

Game::Game() {
	cout << "Hackanoid \t: v0.0.1 \t: whoxer" << endl;
	cout << "\n\n";
	cout << "Você possui código de salvamento? ('s' ou 'n')" << endl;

	cin >> opt;

	switch (opt) {
		case 's':
			cout << "Digite o codigo de salvamento: ";
			cin >> save_code;

			if (save_code == 5732) {
				p_game_state = 1;
			}
			if (save_code == 8961) {
				p_game_state = 2;
			}
			if (save_code == 2345) {
				p_game_state = 3;
			}
			if (save_code == 7198) {
				p_game_state = 4;
			}
			break;
		case 'n':
			p_game_state = 0;
			break;
		default:
			cout << "{OPÇÃO INVÁLIDA}" << endl;
			break;
	}
}

void Game::startGame(int game_state, bool game_running) {
	game_state = p_game_state;
	game_running = p_game_running;

	while (game_running) {
		//code
	}
}

Game::~Game() {}
