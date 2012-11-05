/* 
 * File:   Partie.cpp
 * Author: jonathancozzo
 * 
 * Created on 5 novembre 2012, 15:22
 */

#include "Partie.h"

Partie::Partie() {
}

Partie::Partie(const Partie& orig) {
}

Partie::~Partie() {
}

void jouer_tour(Joueur j1, Joueur j2) {
    Coup * c1;
    Coup * c2;
    c1=j1.obtenir_coup();
    c2=j2.obtenir_coup();
    if (*c1<*c2) j2.score++;
    else if (*c2<*c1) j1.score++;
}

void afficher_score(Joueur j1, Joueur j2) {
    std::cout<< "Joueur 1 : " << j1.score << "Joueur 2 : " << j2.score <<std::endl;
}
