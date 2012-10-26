/*
 * File:   Pierre.h
 * Author: jonathancozzo
 *
 * Created on 26 octobre 2012, 15:08
 */

#ifndef PIERRE_H
#define	PIERRE_H
#include <string>
#include "Coup.h"

class Pierre : public Coup {
private:
    std::string type();
};

#endif	/* PIERRE_H */

