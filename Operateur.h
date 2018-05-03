

#ifndef PROJETCPP_OPERATEUR_H
#define PROJETCPP_OPERATEUR_H


#include "Expression.h"

class Operateur : public Expression{
protected:
    Expression *_operandeGauche;
    Expression *_operandeDroite;

public:
    Operateur();
    virtual ~Operateur();
    Expression *getOperandeGauche();
    Expression *getOperandeDroite();
    void setOperandeGauche(Expression *e);
    void setOperandeDroite(Expression *e);

private:

};


#endif //PROJETCPP_OPERATEUR_H
