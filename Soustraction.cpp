//
// Created by nguedjio on 20/04/18.
//

#include <iostream>
#include "Soustraction.h"

using namespace std;

Soustraction::Soustraction(Expression *e1, Expression *e2){
    this->setOperandeGauche(e1);
    this->setOperandeDroite(e2);
}

Soustraction::Soustraction(){

}

Soustraction::~Soustraction(){

}

float Soustraction::calculer(){
    return this->getOperandeGauche()->calculer() - this->getOperandeDroite()->calculer();
}

void Soustraction::afficher(){
    this->getOperandeGauche()->afficher();
    cout << " - ";
    this->getOperandeDroite()->afficher();
    cout << endl;
}

void Soustraction::afficher_npi(){
    this->getOperandeDroite()->afficher();
    this->getOperandeGauche()->afficher();
    cout << "-";
    //cout << endl;
}
