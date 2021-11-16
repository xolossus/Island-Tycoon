//
// Created by Rodrigo on 16/11/2021.
//

#include "Zonas.h"

string Zonas::ZonasNome()
{
    int temp=0;

    temp = rand() % (tipoZonas.size());

    return tipoZonas[temp];
}

string Zonas::ValidaZona(string valida)
{
    string auxzo;
    auxzo = valida;

    if(auxzo == " ")
    {
        auxzo = auxzo + "   |";
    }
    else
    {
        auxzo = auxzo + " |";
    }
    valida = auxzo;
    return valida;
}

Zonas::Zonas() {}

Zonas::Zonas(Zonas *pZonas) {

}
