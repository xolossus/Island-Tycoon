//
// Created by Rodrigo on 16/11/2021.
//

#ifndef POO_TRABALHO_ILHA_H
#define POO_TRABALHO_ILHA_H

#include "Edificios.h"
#include "Zonas.h"
#include "Trabalhadores.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <iomanip>

class Edificios;
class Zonas;
class Trabalhadores;

using namespace std;
class Ilha{
    int MaxLinha=4, MaxColuna=5;
    Edificios ed;
    Zonas zo;
    vector<Zonas>zona;
    vector<Edificios>edificio;
    vector<Trabalhadores>trabalhadores;
    vector<string>tipoZonas={"mnt", "dsr", "pas", "flr", "pnt", "znX"};

public:
    Ilha();

    void adicionaEdificio();
    void adicionaZona();
    void CriaIlha();
    void MostraIlha();
};

#endif //POO_TRABALHO_ILHA_H
