#include<stdio.h>
#include"game.h"

int main() {
 
   
struct Game* game = Game(200, 10);
    

    printf("Score: %d\n", game->score);
    printf("Level: %d\n", game->level);

    printf("\n===================================================\n\n");
//    struct Game* gamePtr = Game(200, 10);

  displayGameInfo(game);
    dtor(game);
  displayGameInfo(game);
    return 0;
}