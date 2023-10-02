#include "Main.hpp"

bool playing = true;


void update() {
    refresh();
}

int main(void) {
    initscr();
    Game newGame;
    int opt = 0;

    while (playing) {
        newGame.Play();
        newGame.Stages(opt);
        update();
    }

    endwin();
    return 0;
}