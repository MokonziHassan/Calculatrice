//
// Created by nguedjio on 20/04/18.
//

#ifndef PROJETCPP_ADDITION_H
#define PROJETCPP_ADDITION_H


#include "Operateur.h"
#include "Expression.h"

class Addition : public Operateur{
protected:

public:
    Addition();
    virtual ~Addition();
    Addition(Expression *e1, Expression *e2);
    virtual void afficher();
    virtual void afficher_npi();
    virtual float calculer();

};


#endif //PROJETCPP_ADDITION_H
