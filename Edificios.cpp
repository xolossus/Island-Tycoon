//
// Created by Rodrigo on 16/11/2021.
//

#include "Edificios.h"

string Edificios::EdificioNome()
{
    int temp;

    temp = rand() % (tipoEdificios.size());

    return ValidaEdificio(tipoEdificios[temp]);
}

string Edificios::ValidaEdificio(string valida)
{
    string auxed;
    auxed = valida;

    if(auxed == "elec")
    {
        auxed = (char)179 + auxed;
    }
    else
    {
        if(auxed == " ")
        {
            auxed = (char)179 + auxed + "   ";
        }
        else
        {
            auxed = (char)179 + auxed + " ";
        }
    }
    valida = auxed;
    return valida;
}

Edificios::Edificios()
{
    this->EdificiosTipo = EdificioNome();
}

Edificios::Edificios(string tipo)
{
    this->EdificiosTipo = tipo;
}

Edificios::Edificios(Edificios *pEdificios) {

}

string Edificios::getEdTipo() {
    return EdificiosTipo;
}



