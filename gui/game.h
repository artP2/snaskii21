#pragma once

#include <stdbool.h>
#include "SDL.h"
#include "wall.h"

typedef struct {
    int windowWidth;
    int windowHeight;
    int blockSize;
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool initialized;
    bool running;
    bool paused;
    Wall borders[4];
} Game;

// Function to create and initialize Game instance; must be called before starting the game
bool initialize_game(Game* game);
void free_game(Game* game);
void run_game(Game* game);
void receive_user_input(Game* game);
void update_game(Game* game);
void draw_game(Game* game);