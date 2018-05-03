#include <iostream>
#include "Addition.h";
#include "Constante.h";
#include "Fonction.h"

using namespace std;

int main(){
    string rpn, temp_rpn;
    Expression *e1= new Constante(10), *e2 = new Constante(10);

    Addition addition(e1,e2);
    addition.afficher();
    cout << addition.calculer() << endl;

    /*
    cout << "Entrez votre EPF : ";
    getline (cin, rpn);

    Fonction::doNPIoperation(rpn);
    rpn = "";
    */

    do{
        cout << "Entrez votre element (ou entrez \"p\" pour arrêter) : ";
        getline (cin, temp_rpn);

        if(temp_rpn != "p"){

            /*
             Gestion des erreurs...
              */

            if(rpn.empty()){
                rpn.append(temp_rpn);
            } else{
                rpn.append(" ");
                rpn.append(temp_rpn);
            }
        }

        cout << "Voici votre EPF : " << rpn << endl;

    }while (temp_rpn != "p");

    Fonction::doNPIoperation(rpn);

    return 0;
}
