//
// Created by nguedjio on 20/04/18.
//

#ifndef PROJETCPP_EXPRESSION_H
#define PROJETCPP_EXPRESSION_H



class Expression{
protected:
    float _constante;

public:
    Expression();
    Expression(float c);
    virtual ~Expression();
    virtual void afficher() = 0 ;
    virtual void afficher_npi() = 0 ;
    virtual float calculer() = 0;
};


#endif //PROJETCPP_EXPRESSION_H
