
#ifndef PROJETCPP_MULTIPLICATION_H
#define PROJETCPP_MULTIPLICATION_H


#include "Operateur.h"
#include "Expression.h"

class Multiplication : public Operateur{
protected:

public:
    Multiplication();
    virtual ~Multiplication();
    Multiplication(Expression *e1, Expression *e2);
    virtual void afficher();
    virtual void afficher_npi();
    virtual float calculer();

};


#endif //PROJETCPP_MULTIPLICATION_H
