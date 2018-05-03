//
// Created by nguedjio on 20/04/18.
//

#ifndef PROJETCPP_CONSTANTE_H
#define PROJETCPP_CONSTANTE_H

#include "Expression.h"

class Constante : public Expression{
protected:
    float _valeur;

public:
    Constante();
    Constante(float c);
    ~Constante();
    void afficher();
    void afficher_npi();
    float calculer();
    float calculer(Expression *eg, Expression *ed);
    //float getValeur();

};


#endif //PROJETCPP_CONSTANTE_H
