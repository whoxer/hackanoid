#include <iostream>
#include <ncurses.h>
#include "Stages.hpp"

class Game {
    public:
        Game();
        ~Game();
        void Play();
        void Stages(int stage);
        int Load();
        int NewGame();
    private:
        int stage_n = 0;
        // int g_opt;
        // Adicionar variaveis fostream e os caralho assim que eu começar a codificar o sistema de 
        // salvamento de arquivos. (Por enquanto escrever apenas o básico).
};