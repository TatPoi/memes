#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main()
{
    int myCrowns;
    int myMembership;
    int worlds;
    int dollarsMembership = 20 + 40 * 2;
    int baseLevelA = 5;
    int baseLevelB = 5;
    int myLevel = 19;


    myCrowns = 5000;
    myMembership = 365;
    worlds = 1000;
    baseLevelA = 5;
    baseLevelB = 5;



    char name[] = "Arjun";
    char game[10] = "Wizard101";
    char firstName[15];
    char yesNo[4];
    char yourPirate[15];


    float aB, cD, eF, average;
    aB = 1;
    cD = 1;
    average = (aB + cD + eF) / 3;


    game[0] = 'P';
    game[2] = 'r';
    game[4] = 't';
    game[5] = 'e';


    strcpy(name, "TatPoi");




    printf("My name is %s. I play %s. I am a %s. \n", name, game, MYCLASS);
    printf("For every bundle, you get %d crowns and %d days of membership in %s! \n", myCrowns, myMembership, game);


    printf("Do you play %s?\n", game);
    scanf("%s", yesNo);


    printf("What is your name?\n");
    scanf("%s", firstName);


    printf("What is your class?\n");
    scanf("%s", yourPirate);


    printf("Are you a member?\n");
    scanf("%s", yesNo);


    printf("How many powers do you have? \n");
    scanf("%f", &eF);


    printf("The average number of powers you have compared to beginning pirates is %f. \n", average);


    printf("Good Job!\n");

    printf("If you are a member, you will unlock %d worlds. \n", worlds + 50);

    printf("Membership costs $%d. \n", dollarsMembership);

    printf("My crew consists of a platypus witchdoctor and a shark witchdoctor both base levels of %d and %d. \n", baseLevelA, baseLevelB);


    printf("What level are you? \n");
    scanf("%d", &myLevel);


    if(myLevel >= 10){


        printf("Cool!\n");


    }
    if(myLevel <= 10){


        printf("Work Harder!!!!!!!! \n");


    }



    return 0;
}
