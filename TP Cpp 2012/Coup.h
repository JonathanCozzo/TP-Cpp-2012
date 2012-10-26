/*
 * File:   Coup.h
 * Author: jonathancozzo
 *
 * Created on 26 octobre 2012, 15:08
 */

#ifndef COUP_H
#define	COUP_H
#include <string>
#include <iostream>

class Coup {
private:
    std::string type() const;
    friend bool operator==(const Coup&, const Coup&);
    friend bool operator<(const Coup&, const Coup&);
    friend void operator<<(ostream &flux, Coup const& cp );
};

#endif	/* COUP_H */

