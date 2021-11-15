//
// Created by Rodrigo on 12/11/2021.
//


#ifndef POO_TRABALHO_COMANDOS_H
#define POO_TRABALHO_COMANDOS_H

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include "Auxiliares.h"

using namespace std;


class interface
        {
        public:
            interface();
            bool comandos();
            vector<string> DividirString(string comando);
            bool VerificaIntString(string x);
        };


#endif //POO_TRABALHO_COMANDOS_H
