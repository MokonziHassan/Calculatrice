

#include <iostream>
#include "Division.h"

using namespace std;

Division::Division(Expression *e1, Expression *e2){
    this->setOperandeGauche(e1);
    this->setOperandeDroite(e2);
}

Division::Division(){

}

Division::~Division(){

}

float Division::calculer(){
    return this->getOperandeGauche()->calculer() / this->getOperandeDroite()->calculer();
}

void Division::afficher(){
    this->getOperandeGauche()->afficher();
    cout << " / ";
    this->getOperandeDroite()->afficher();
    cout << endl;
}

void Division::afficher_npi(){
    this->getOperandeDroite()->afficher();
    this->getOperandeGauche()->afficher();
    cout << "/";
    //cout << endl;
}