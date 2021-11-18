//
// Created by Rodrigo on 16/11/2021.
//

#ifndef POO_TRABALHO_EDIFICIOS_H
#define POO_TRABALHO_EDIFICIOS_H

#include <sstream>
#include <time.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Edificios {
    vector<string> tipoEdificios = {"mnF", "mnC", "elec", "bat", "fun", " "};
    string EdificiosTipo;
public:
    Edificios();
    Edificios(string tipo);
    string EdificioNome();
    string ValidaEdificio(string valida);
    string getEdTipo();

    Edificios(Edificios *pEdificios);
};


#endif //POO_TRABALHO_EDIFICIOS_H
