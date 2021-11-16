//
// Created by Rodrigo on 16/11/2021.
//

#ifndef POO_TRABALHO_TRABALHADORES_H
#define POO_TRABALHO_TRABALHADORES_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

class Trabalhadores {
    vector<string> tipoTrab = {"O", "OO", "OOO", "OOOO", "M", "MM", "MMM", "MMMM", "L", "LL", "LLL", "LLLL", " ", " ", " "};
public:
    Trabalhadores();
    string NomeTrab();
    int ContaTrab();
    string ValidaTrabalhadores(string valida);

    Trabalhadores(Trabalhadores *pTrabalhadores);
};


#endif //POO_TRABALHO_TRABALHADORES_H
