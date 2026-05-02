#include <stdio.h>
#include <stdlib.h>
#include "game.h"


// struct Game Game(int score, int level) {
//     struct Game game;
//     game.score = score;
//     game.level = level;

//     return game;
// }

// struct Game* Game(int score, int level)
// {
//     struct Game* game = malloc(sizeof(struct Game));
//     game->score = score;
//     game->level = level;

//     return game;
// }

void dtor(struct Game* game) {
    free(game);
    printf("Game object destroyed.\n");
}

void displayGameInfo(struct Game* game) {
    printf("Score: %d\n", game->score);
    printf("Level: %d\n", game->level);
}