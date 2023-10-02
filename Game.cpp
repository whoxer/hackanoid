#include "Game.hpp"
#include <curses.h>

Game::Game() {}
Game::~Game() {}

void Game::Play() {
    printw("< hackanoid v.0.0.1 - criado por whoxer >\n");
    printw("----------------------------------------------------------------\n");
    printw("[ hackanoid é um jogo de rpg de texto cujo se baseia nas escolhas em que você toma no \
            decorrer do caminho. Palavras escritas em CAIXA ALTA significam itens ou lugares \
            pelos os quais você pode ou poderá brevemente acessar no futuro. Haverão quebra \
            cabeças no decorrer do caminho e cada um deles irá depender do uso do raciocínio \
            e da lógica do jogador(a)(e). ]");
    printw("> digite qualquer tecla para iniciar");

    getch();
}
void Game::Stages(int stage) {
    stage = stage_n;
    if (stage == 0) {
        stageZero();
    }
}

