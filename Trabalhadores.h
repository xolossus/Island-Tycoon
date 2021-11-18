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
    vector<string> tipoTrab = {"O", "M", "L"};
    string TrabalhadoresTipo;
public:
    Trabalhadores();
    string NomeTrab();
    //string ContaTrab(string conta);
    string ValidaTrabalhadores(string valida);
    string getTrabTipo();
    void setTipo(int aux);

    Trabalhadores(Trabalhadores *pTrabalhadores);
};


#endif //POO_TRABALHO_TRABALHADORES_H
