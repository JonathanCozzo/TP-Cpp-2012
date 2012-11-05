/*
 * File:   Ciseaux.h
 * Author: jonathancozzo
 *
 * Created on 26 octobre 2012, 14:55
 */

#ifndef CISEAUX_H
#define	CISEAUX_H
#include <string>
#include "Coup.h"

class Ciseaux : public Coup const {
private:
    std::string type();
};

#endif	/* CISEAUX_H */

