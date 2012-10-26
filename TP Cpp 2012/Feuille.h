/* 
 * File:   Feuille.h
 * Author: jonathancozzo
 *
 * Created on 26 octobre 2012, 15:09
 */

#ifndef FEUILLE_H
#define	FEUILLE_H
#include <string>
#include "Coup.h"

class Feuille : public Coup {
private:
    std::string type();
};


#endif	/* FEUILLE_H */

