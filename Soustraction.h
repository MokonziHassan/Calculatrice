//
// Created by nguedjio on 20/04/18.
//

#ifndef PROJETCPP_SOUSTRACTION_H
#define PROJETCPP_SOUSTRACTION_H


#include "Operateur.h"

class Soustraction : public Operateur{
protected:

public:
    Soustraction();
    ~Soustraction();
    Soustraction(Expression *e1, Expression *e2);
    virtual void afficher();
    virtual void afficher_npi();
    virtual float calculer();

};


#endif //PROJETCPP_SOUSTRACTION_H
