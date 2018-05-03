//
// Created by nguedjio on 22/04/18.
//

#ifndef PROJETCPP_FONCTION_H
#define PROJETCPP_FONCTION_H

#include <string>
#include <map>

using namespace std;

class Fonction{

protected:
    static map<std::string, float> variable;

public:
    Fonction();
    virtual ~Fonction();
    static bool isOperator(std::string c);
    static bool isVariable(std::string c);
    static void doNPIoperation(std::string op);

private:

};


#endif //PROJETCPP_FONCTION_H
