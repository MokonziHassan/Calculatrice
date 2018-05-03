

#include <iostream>
#include "Addition.h"

using namespace std;

Addition::Addition(Expression *e1, Expression *e2){
    this->setOperandeGauche(e1);
    this->setOperandeDroite(e2);
}

Addition::Addition(){

}

Addition::~Addition(){

}

float Addition::calculer(){
    return this->getOperandeGauche()->calculer() + this->getOperandeDroite()->calculer();
}

void Addition::afficher(){
    this->getOperandeGauche()->afficher();
    cout << " + ";
    this->getOperandeDroite()->afficher();
    cout << endl;
}

void Addition::afficher_npi(){
    this->getOperandeDroite()->afficher();
    this->getOperandeGauche()->afficher();
    cout << "+";
    //cout << endl;
}
