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

using namespace std;

class Zonas {
    vector<string> tipoZonas = {"mnt", "dsr", "pas", "flr", "pnt", "znX", " "};
public:
    Zonas();
    string ZonasNome();
    string ValidaZona(string valida);

    Zonas(Zonas *pZonas);
};


#endif //POO_TRABALHO_ZONAS_H
