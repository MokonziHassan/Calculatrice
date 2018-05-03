
#include <iostream>
#include "Operateur.h"

using namespace std;

Operateur::Operateur(){

}

Operateur::~Operateur(){

}

Expression *Operateur::getOperandeGauche(){
    return this->_operandeGauche;
}

Expression *Operateur::getOperandeDroite(){
    return this->_operandeDroite;
}

void Operateur::setOperandeGauche(Expression *e){
    this->_operandeGauche = e;
}

void Operateur::setOperandeDroite(Expression *e){
     this->_operandeDroite = e;
}