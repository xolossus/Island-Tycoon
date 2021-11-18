//
// Created by Rodrigo on 12/11/2021.
//


#ifndef POO_TRABALHO_COMANDOS_H
#define POO_TRABALHO_COMANDOS_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include "Auxiliares.h"
#include "Ilha.h"
#include "Zonas.h"

using namespace std;

class Comandos
        {
    Auxiliares* auxiliar;
    Ilha* limites;
    Zonas* zona;
        public:
            Comandos();
            bool ValidaComandos(string aux);
            void FileInicial(string nomefich);
            void ExecutarComandos(vector<string> tokens, int auxlin, int auxcol);
        };


#endif //POO_TRABALHO_COMANDOS_H
