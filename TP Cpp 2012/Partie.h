/* 
 * File:   Partie.h
 * Author: jonathancozzo
 *
 * Created on 5 novembre 2012, 15:22
 */

#ifndef PARTIE_H
#define	PARTIE_H
#include "Joueur.h"

class Partie {
public:
    Partie();
    Partie(const Partie& orig);
    virtual ~Partie();
private:
    void jouer_tour(Joueur j1, Joueur j2);
    void afficher_scores(Joueur j1, Joueur j2);
};

#endif	/* PARTIE_H */

