/*
 * File:   main.cpp
 * Author: jonathancozzo
 *
 * Created on 26 octobre 2012, 14:08
 */

#include <cstdlib>
#include <string>
#include "Coup.h"
#include "Pierre.h"
#include "Ciseaux.h"
#include "Feuille.h"
#include "Joueur.h"
#include "Partie.h"

using namespace std;

/*
 *
 */

int main(int argc, char** argv) {
    Joueur * joueur1 = new Joueur();
    Joueur * joueur2 = new Joueur();
    joueur1->score=0;
    joueur2->score=0;
    Partie * partie = new Partie();
    while(joueur1->score<10 || joueur2->score<10){
        partie->jouer_tour(*joueur1, *joueur2);
        partie->afficher_score(*joueur1, *joueur2);
    }
    return 0;

}

