#include <stdio.h>
#include <stdlib.h>

#include "libClient.h"

void lancer(void);
void dodge(void);

int main (int argc, char **argv)
{
    Jeu jeu;
    Moi moi;
    Adversaire adversaire;
    int nbBoules;
    Boule boule[BOULES_NB_MAX];
    int objectif=50;
    int F=0,alpha=0;
    int etat;
    int newx;
    int oldx;
    int I=1;

    // adresse IP du serveur sous forme de chaine de caracteres
    char adresse[255] = "127.0.0.1";
    // numero du port du serveur
    int port = 1050;

    if (serveurConnecter(adresse, port) != SERVEUR_CONNECTE)
    {
        printf("Serveur introuvable %s:%d\n", adresse, port);
        exit(-1);
    }
    else
    {
        printf("Connexion au serveur %s:%d\n", adresse, port);
    }


    serveurUpload(IMAGE_DEBOUT, "images/debout.png");
    serveurUpload(IMAGE_MARCHE, "images/marche.png");
    serveurUpload(IMAGE_ACCROUPI, "images/accroupi.png");
    serveurUpload(IMAGE_LANCE, "images/lance.png");
    serveurUpload(IMAGE_BONNET_PROFIL, "images/bonnet_profil.png");
    serveurUpload(IMAGE_VICTOIRE, "images/victoire.png");
    serveurUpload(IMAGE_DEFAITE, "images/defaite.png");
    serveurUpload(IMAGE_BONNET_FACE, "images/bonnet_face.png");

    serveurNomRobot("Theo MARTEIL");

    serveurCaracRobot(5, 0, 5, 0);

    serveurDemarrerMatch();

    while (1)
    {
        serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);
        if (!(jeu.chrono % 100))
        {
            printf("%d     %d     %d\n",moi.x,adversaire.x,etat);
        }

                // MACHINES A ETATS
// MACHINES A ETATS
      /* switch (etat)
        {
        case 0 :
            serveurStopperAction();
            if(moi.etat == ROBOT_IMMOBILE) etat=1;
            break;
        case 1 :
            serveurAvancer();
            if(moi.x >= 240)
            {
                etat=2;
            }
            break;
        case 2 :
            serveurStopperAction();
            if(moi.etat == ROBOT_IMMOBILE) etat=3;
            break;
        case 3 :
            serveurReculer();
            if (moi.x <= 80)
            {
                etat=0;
            }
            break;
        default :
            serveurNeRienChanger();
            etat = 0;
        }

    serveurFermer();
    printf("Serveur deconnecte\n");

    return 0;
}
*/


//EXERCICE 1

/*
        // MACHINES A ETATS
        switch (etat)
        {
        case 0 :
            serveurStopperAction();
            if(moi.etat == ROBOT_IMMOBILE) etat=1;
            break;
        case 1 :
            serveurAvancer();
            if(moi.x >= 240)
            {
                etat=2;
            }
            break;
        case 2 :
            serveurStopperAction();
            if(moi.etat == ROBOT_IMMOBILE) etat=3;
            break;
        case 3 :
            serveurReculer();
            if (moi.x <= 80)
            {
                etat=0;
            }
            break;
        default :
            serveurNeRienChanger();
            etat = 0;
        }
*/


//EXERCICE 2



        // MACHINES A ETATS
     /*   switch (etat)
        {
        case 0 :
            serveurStopperAction();
            if(moi.etat == ROBOT_IMMOBILE) etat=1;
            break;
        case 1 :
            serveurSAccroupir();
            if(moi.etat == ROBOT_ACCROUPI) etat=2;
            break;
        case 2 :
            if (moi.neigeRassemblee)
            {
                serveurCompacterNeige(20);
            }
            else
            {
                serveurRassemblerNeige();
            }
            if(moi.nbBoule != 0) etat=3;
            break;
        case 3 :
            serveurSeRelever();
            if(moi.etat == ROBOT_IMMOBILE) etat=0;
            break;

        default :
            serveurNeRienChanger();
            etat = 0;
}}        }*/



//v3

switch(etat)
{
    case 0:
        printf ("case0\n");
        serveurStopperAction();
        if(moi.etat == ROBOT_IMMOBILE || moi.etat==ROBOT_ACCROUPI) etat=1;
        break;
    case 1:
        printf("case1\n");
        if (adversaire.nbBoule != 0) etat=7;
        else if(moi.neigeDispo < 50 ) etat=5;
        else if (moi.neigeDispo >= 50){serveurSAccroupir();
            if(moi.etat == ROBOT_ACCROUPI) etat=2;}
        break;
    case 2 :
        printf("case2\n");
        if (moi.neigeRassemblee)
        {
            serveurCompacterNeige(50);
        }
        else
        {
            serveurRassemblerNeige();
        }
        if(moi.nbBoule != 0) etat=3;
        break;
    case 3 :
        printf("case3\n");
        serveurSeRelever();
        if(moi.etat == ROBOT_IMMOBILE) etat=4;
        break;
    case 4:
        oldx=moi.x;
        printf("case4\n");
        lancer();
        if(moi.etat == ROBOT_IMMOBILE) etat=0;
        break;
    case 5:
        printf("case5\n");
        serveurStopperAction();
        if(moi.etat == ROBOT_IMMOBILE) etat=6;
        break;
    case 6 :
        printf("case6\n");
        if (moi.nbBoule == 0 && moi.neigeDispo < 50)
        {
            while(moi.x<oldx+60) {serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);
            serveurAvancer();
            }
        }
        else if (moi.nbBoule != 0) etat=4;
        else if(moi.neigeDispo >= 50) etat=0;
        break;
    case 7 :
        printf ("case7\n");
        dodge();
        etat=0;
        break;







    default :
        printf("default\n");
        serveurNeRienChanger();
        etat = 0;
}}}


void dodge(void){

    Jeu jeu;
    Moi moi;
    Adversaire adversaire;
    int nbBoules;
    Boule boule[BOULES_NB_MAX];
    int objectif=50;
    int F=0,alpha=0;
    int etat;
    int newx;
    int oldx;
    int I=1;
    serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);
    printf("dodge\n");
    while (adversaire.nbBoule == 0 && boule[0].x>moi.x && boule[0].y>100)
        {
            serveurAvancer();

        }

    if (moi.x>200) serveurReculer();
    if (moi.x<=80) etat=0;
    etat=0;
    }

void lancer(void)
{

    Jeu jeu;
    Moi moi;
    Adversaire adversaire;
    int nbBoules;
    Boule boule[BOULES_NB_MAX];
    serveurRecevoirSituation(&jeu, &moi, &adversaire, &nbBoules, boule);
    int objectif=50;
    int F=0,alpha=0;
    int etat,ventX;
    int I=1;
    float x,a;
    adversaire.x=x;
    ventX=a;
    printf("lancer\n");
    serveurLancer(100,((moi.x+adversaire.x)/500)+40+(a/1000));


}

