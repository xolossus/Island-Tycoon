//
// Created by Rodrigo on 12/11/2021.
//

#include "Auxiliares.h"

vector<string> Auxiliares::DividirString(string comando)
{
    string aux;
    vector<string> tokens;
    stringstream ss(comando);

    while(getline(ss, aux, ' ')) //transfere o conteudo de ss para aux até encontrar um espaço
    {
        tokens.push_back(aux);
    }
    return tokens;
}

bool Auxiliares::VerificaIntString(string x)
{
    for (int i = 0; i < (int)x.size(); i++)
    {
        if (!isdigit(x[i]))
        {
            return false;
        }
    }
    return true;
}


Auxiliares::Auxiliares()
{}


