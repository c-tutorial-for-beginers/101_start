#ifndef GAME_H
#define GAME_H

struct Game
{
    int score;
    int level;
};

// struct Game Game(int score, int level);
struct Game *Game(int score, int level);
void displayGameInfo(struct Game *game);
void dtor(struct Game *game);

#endif // GAME_H