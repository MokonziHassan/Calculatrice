//
// Created by nguedjio on 20/04/18.
//

#include <iostream>
#include "Multiplication.h"

using namespace std;

Multiplication::Multiplication(Expression *e1, Expression *e2){
    this->setOperandeGauche(e1);
    this->setOperandeDroite(e2);
}

Multiplication::Multiplication(){

}

Multiplication::~Multiplication(){

}

float Multiplication::calculer(){
    return this->getOperandeGauche()->calculer() * this->getOperandeDroite()->calculer();
}

void Multiplication::afficher(){
    this->getOperandeGauche()->afficher();
    cout << " * ";
    this->getOperandeDroite()->afficher();
    cout << endl;
}

void Multiplication::afficher_npi(){
    this->getOperandeDroite()->afficher();
    this->getOperandeGauche()->afficher();
    cout << "*";
    //cout << endl;
}