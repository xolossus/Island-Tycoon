//
// Created by Rodrigo on 12/11/2021.
//

#ifndef POO_TRABALHO_AUXILIARES_H
#define POO_TRABALHO_AUXILIARES_H
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Auxiliares{
public:
    Auxiliares();
    vector<string> DividirString(string comando);
    bool VerificaIntString(string x);
};


#endif //POO_TRABALHO_AUXILIARES_H
