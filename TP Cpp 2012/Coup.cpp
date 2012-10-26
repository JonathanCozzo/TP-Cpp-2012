/* 
 * File:   Coup.cpp
 * Author: jonathancozzo
 * 
 * Created on 26 octobre 2012, 15:08
 */

#include "Coup.h"

std::string Coup::type() {
    return "Coup";
}

bool operator== (const Coup& c1, const Coup& c2) {
    return c1.type()==c2.type() ;
}

bool operator< (const Coup& c1, const Coup& c2) {
    if (c1.type()=="Pierre") {
        if (c2.type()=="Pierre") return false ;
        if (c2.type()=="Feuille") return true ;
        if (c2.type()=="Ciseaux") return false ;
    }
    if (c1.type()=="Feuille") {
        if (c2.type()=="Pierre") return false ;
        if (c2.type()=="Feuille") return false ;
        if (c2.type()=="Ciseaux") return true ;
    }
    if (c1.type()=="Ciseaux") {
        if (c2.type()=="Pierre") return true ;
        if (c2.type()=="Feuille") return false ;
        if (c2.type()=="Ciseaux") return false ;
    }
}
