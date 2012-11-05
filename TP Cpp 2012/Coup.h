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
using namespace std;

class Joueur;

class Coup {
private:
    string type() const;
    friend bool operator==(const Coup&, const Coup&);
    friend bool operator<(const Coup&, const Coup&);
    friend ostream& operator<<(ostream&, const Coup&);
    
public:
    Joueur* joueur;
};

#endif	/* COUP_H */

