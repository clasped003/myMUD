#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#define MAX_BUFF 10
#define MIN_BUFF 2
#define AGE_BUFF 3

typedef struct{
    char playerGender;
    int playerAge;
    char playerName[MAX_BUFF];
    char playerClass[MAX_BUFF];
}player;

#endif
