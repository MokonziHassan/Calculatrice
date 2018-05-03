//
// Created by nguedjio on 20/04/18.
//

#ifndef PROJETCPP_DIVISION_H
#define PROJETCPP_DIVISION_H


#include "Operateur.h"
#include "Expression.h"

class Division : public Operateur{
protected:

public:
    Division();
    virtual ~Division();
    Division(Expression *e1, Expression *e2);
    virtual void afficher();
    virtual void afficher_npi();
    virtual float calculer();

};


#endif //PROJETCPP_DIVISION_H
