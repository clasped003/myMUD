#ifndef PLAYER_H
#define PLAYER_H

#define MAX_BUFF 22

typedef struct{
    int playerAge; //remember: just declare vars only, do not pass values here.
    char playerGender;
    char playerClass;
    char playerName[MAX_BUFF];
}player;

#endif
