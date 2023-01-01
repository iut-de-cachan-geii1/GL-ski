//  Copyright (c) 2018 Theo Marteil
//  Copyright (c) 2023 Antoine Tran Tan
//

#include <cstdio>
#include <cstdlib>

extern "C"
{
    #include "libClient.h"
}

#include "my_header.h"

void dodge(void)
{

    Jeu jeu;
    Moi moi;
    Adversaire adversaire;
    int nbBoules;
    Boule boule[BOULES_NB_MAX];
    int objectif = 50;
    int F = 0, alpha = 0;
    int etat;
    int newx;
    int oldx;
    int I = 1;

    serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);
    printf("dodge\n");

    while (adversaire.nbBoule == 0 && boule[0].x > moi.x && boule[0].y > 100)
    {
        serveurAvancer();
    }

    if (moi.x > 200)
    {
        serveurReculer();
    }

    if (moi.x <= 80)
    {
        etat = 0;
    }

    etat = 0;
}

void lancer(void)
{

    Jeu jeu;
    Moi moi;
    Adversaire adversaire;
    int nbBoules;
    Boule boule[BOULES_NB_MAX];

    serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);

    int objectif = 50;
    int F = 0, alpha = 0;
    int etat, ventX;
    int I = 1;
    float x, a;

    adversaire.x = x;
    ventX = a;
    printf("lancer\n");
    serveurLancer(100, ((moi.x + adversaire.x) / 500) + 40 + (a / 1000));
}
