/* 
 * File:   Joueur.cpp
 * Author: jonathancozzo
 * 
 * Created on 5 novembre 2012, 14:17
 */

#include "Joueur.h"
#include "Coup.h"

Joueur::Joueur() {
}

Joueur::Joueur(const Joueur& orig) {
}

Joueur::~Joueur() {
}

Coup* obtenir_coup() {
    std::string s;
    std::cin >> s;
    if (s=="Pierre") return new Pierre();
    if (s=="Ciseaux") return new Ciseaux();
    if (s=="Feuille") return new Feuille();
    else throw "Coup invalide";
}