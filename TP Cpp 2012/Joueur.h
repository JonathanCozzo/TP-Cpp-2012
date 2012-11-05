/* 
 * File:   Joueur.h
 * Author: jonathancozzo
 *
 * Created on 5 novembre 2012, 14:17
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include "Coup.h"
#include "Pierre.h"
#include "Feuille.h"
#include "Ciseaux.h"

class Joueur {
public:
    Joueur();
    Joueur(const Joueur& orig);
    virtual ~Joueur();
    Coup* obtenir_coup();
    int score;
private:

};

#endif	/* JOUEUR_H */

