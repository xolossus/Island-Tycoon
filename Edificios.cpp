//
// Created by Rodrigo on 16/11/2021.
//

#include "Edificios.h"

string Edificios::EdificioNome()
{
    int temp=0;

    temp = rand() % (tipoEdificios.size());

    return tipoEdificios[temp];
}

string Edificios::ValidaEdificio(string valida)
{
    string auxed;
    auxed = valida;

    if(auxed == "elec")
    {
        auxed = auxed + "|";
    }
    else
    {
        if(auxed == " ")
        {
            auxed = auxed + "   |";
        }
        else
        {
            auxed = auxed + " |";
        }
    }
    valida = auxed;
    return valida;
}

Edificios::Edificios() {}

Edificios::Edificios(Edificios *pEdificios) {

}



