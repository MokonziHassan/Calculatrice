//
// Created by nguedjio on 22/04/18.
//

#include <iostream>
#include <stack>
#include <vector>
#include "Fonction.h"
#include "Addition.h"
#include "Constante.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"

using namespace std;

Fonction::Fonction(){

}

Fonction::~Fonction(){

}


bool Fonction::isOperator(const string c){
    string op = "*/-+";
    bool res = false;

    if(op.find(c) != string::npos){
        res = true;
    }

    return res;
}

bool Fonction::isVariable(const string c){
    bool res = false;

    for(std::map<std::string, float>::iterator it=variable.begin(); it!=map.end(); ++it)
    {
        if(it->first == c)
        {
            res = true;
        }
    }


    return res;
}

void Fonction::doNPIoperation(string rpn){
    stack<float> p;
    float val1, val2, res;
    string delimiter = " ", token, temp_rpn = rpn;
    size_t pos = 0;
    vector<string> elements;
    string::size_type sz;

    while ((pos = temp_rpn.find(delimiter)) != string::npos) {
        token = temp_rpn.substr(0, pos);
        std::cout << token << std::endl;
        elements.push_back(token);
        temp_rpn.erase(0, pos + delimiter.length());
    }
    elements.push_back(temp_rpn);

    for(unsigned int i = 0; i < elements.size(); i++){
        if(!(Fonction::isOperator(elements[i]))){
            if(!(Fonction::isVariable(elements[i]))){
                float element = stof(elements[i]);
                p.push(element);
            }else
            {
                for(std::map<std::string, float>::iterator it=variable.begin(); it!=map.end(); ++it)
                {
                    if(it->first == elements[i])
                    {
                        p.push(it->second);
                    }
                    else
                    {
                        float temp;
                        cout<< "Entrez la valeur de la variable"<< endl;
                        cin>>temp;
                        p.push(temp);
                        variable[elements[i]] = temp;
                    }
                }
            }
            
        } else{
            val1 = p.top();
            p.pop();

            val2 = p.top();
            p.pop();

            Expression *e1= new Constante(val1);
            Expression *e2 = new Constante(val2);

            if(elements[i] == "+"){
                Addition addition(e1, e2);
                res = addition.calculer();
                //addition.afficher_npi();
                //cout << " = " << res << endl;
            }else if(elements[i] == "-"){
                Soustraction soustraction(e1, e2);
                res = soustraction.calculer();
                //soustraction.afficher_npi();
                //cout << " = " << res << endl;
            }else if(elements[i] == "*"){
                Multiplication multiplication(e1, e2);
                res = multiplication.calculer();
                //multiplication.afficher_npi();
                //cout << " = " << res << endl;
            } else{
                Division division(e1, e2);
                res = division.calculer();
                //division.afficher_npi();
                //cout << " = " << res << endl;
            }

            p.push(res);
        }
    }
    cout << "\nResultat : " << rpn << " = " << p.top() << endl;
}