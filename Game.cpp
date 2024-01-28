#include "Game.hpp"
// 'checkWhichStateUR(int state)' é uma função que servirá básicamente para saber e redirecionar
// o usuário para o estágio em que ele estiver a depender da variável state de dentro da classe 'Game::'
//
// caso o usuário esteja no estágio 0, ele será redirecionado para o estágio 0 e etc.
void checkWhichStateUR(int state) {
	switch (state) {
		case 0:
			//code
			break;
		case 1:
			//code
			break;
		case 2:
			//code
			break;
		case 3:
			//code
			break;
		default:
			cout << "{ERROR}" << endl;
			break;
	}
}

// a função 'checkStateCode(int code)' recebe o valor 'save_code' de dentro da classe 'Game::' como parâmetro
// assim que ele verifica o código de salvamento dentro da função ele retorna o valor do estágio em que o
// usuário está para a variável 'p_game_state' dentro da classe 'Game::'
//
// se o código for 'yyyy' ele retorna 'x'
int checkStateCode(int code) {
	int state = 0;
	if (code == 5732)
		return state = 1;
	if (code == 8961)
		return state = 2;
	if (code == 1375)
		return state = 3;
	if (code == 4030)
		return state = 4;
	return 0;
}
// 'Game::Game()' inicia a classe e verifica se o usuário possui um código de salvamento.
//
// caso 's' ele pede o valor do código e checa se é verdadeiro
// caso 'n' ele segue o jogo a partir do início.
Game::Game() {
	cout << "Hackanoid \t: v0.0.1 \t: whoxer" << end;
	cout << "\n\n";
	cout << "Você possui código de salvamento? ('s' ou 'n')" << endl;
	cout << "> ";
	cin >> opt;
	switch (opt) {
		case 's':
			cout << "Digite o codigo de salvamento:";
			cout << "> ";
			cin >> save_code;
			p_game_state = checkStateCode(save_code);
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
	#if defined(_WIN32) || defined(_WIN64)
    		system("cls");
	#elif defined(__linux__) || defined(__unix__)
		system("clear");
	#endif

	cout << "Bem vinde ao Hackanoid." << endl;
	cout << "Estágio: " << p_game_state << endl;

	game_state = p_game_state;
	game_running = p_game_running;

	while (game_running == true) {
		checkWhichStateUR(game_state);
	}
}

Game::~Game() {}
