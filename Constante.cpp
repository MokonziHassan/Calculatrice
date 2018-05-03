

#include <iostream>
#include "Constante.h"

using namespace std;

Constante::Constante(float c){
    this->_valeur = c;
}

Constante::Constante(){

}

Constante::~Constante(){

}

float Constante::calculer(){
    return this->_valeur;
}

void Constante::afficher(){
    cout << this->_valeur;
}

float Constante::calculer(Expression *eg, Expression *ed){
    return eg->calculer() + ed->calculer();
}

void Constante::afficher_npi(){

}
