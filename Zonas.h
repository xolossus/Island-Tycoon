//
// Created by Rodrigo on 16/11/2021.
//

#ifndef POO_TRABALHO_ZONAS_H
#define POO_TRABALHO_ZONAS_H

#include <sstream>
#include <time.h>
#include <string>
#include <vector>
#include <iostream>
#include "Edificios.h"
#include "Trabalhadores.h"

using namespace std;

class Trabalhadores;
class Edificios;

class Zonas {
    vector<string> tipoZonas = {"mnt", "dsr", "pas", "flr", "pnt", "znX"};
    vector<Trabalhadores> TrabalhadoresTipo;
    string ZonasTipo;
    Edificios EdificiosTipo;    //Quando for adicionar edificio  -> função nas zonas adicionar_edificio (criar objeto do tipo edifcio metelo EdificioTipo)
    int TrabalhadoresCount;     //Quando for adicionar trabalhador, aumentar este counter  -> função nas zonas adicionar_trabalhador (criar objeto do tipo trabalhador metelo no TrabalhadoresTipo e incrementa)
public:
    Zonas();
    string ZonasNome();
    string ValidaZona(string valida);

    Zonas(Zonas *pZonas);

    string getAsString();
    string getZonasTipo();
    string getEdTipo();
    string getTrabTipo();
    string getCountTrab();

    string setCountTrab();
};


#endif //POO_TRABALHO_ZONAS_H
