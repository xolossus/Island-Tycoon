//
// Created by Rodrigo on 16/11/2021.
//

#include "Zonas.h"

string Zonas::ZonasNome()
{
    int temp=0;

    temp = rand() % (tipoZonas.size());

    return ValidaZona(tipoZonas[temp]);
}

string Zonas::ValidaZona(string valida)
{
    string auxzo;
    auxzo = valida;

    if(auxzo == " ")
    {
        auxzo = (char)179 + auxzo + "   ";
    }
    else
    {
        auxzo = (char)179 + auxzo + " ";
    }
    valida = auxzo;
    return valida;
}

Zonas::Zonas()
{
    Edificios ed = new Edificios();
    EdificiosTipo = ed;
}

Zonas::Zonas(Zonas *pZonas){
    this->ZonasTipo = ZonasNome();
    int aux = rand() % 5;
    int aux2 = rand() % 3;

    for(int i=0; i<aux; i++)
    {
        Trabalhadores auxiliar;
        auxiliar = new Trabalhadores();
        auxiliar.setTipo(aux2);
        TrabalhadoresTipo.push_back(auxiliar);
    }
}

string Zonas::getAsString()
{
    string auxed="\0";

    auxed = this->ZonasTipo + "\n" + EdificiosTipo.getEdTipo() + "\n" + ((char)179);
    //cout << "\n" << this->ZonasTipo << "\n";

    for(int i=0; i<TrabalhadoresTipo.size(); i++)
    {
        auxed += TrabalhadoresTipo[i].getTrabTipo();
        if(i==3)
        {
            break;
        }
    }
    auxed += "\n";
    auxed += (char)179 + to_string(TrabalhadoresTipo.size()) + "\n";

    return auxed;
}

string Zonas::getZonasTipo()
{
    return this->ZonasTipo;
}

string Zonas::getEdTipo() {
    return EdificiosTipo.getEdTipo();
}

string Zonas::getTrabTipo()
{
    string aux="\0";

    for(int i=0; i<TrabalhadoresTipo.size(); i++)
    {
        aux += TrabalhadoresTipo[i].getTrabTipo();
        if(i==3)
        {
            break;
        }
    }
    return aux;
}

string Zonas::getCountTrab()
{
    return to_string(TrabalhadoresTipo.size());
}

string Zonas::setCountTrab()
{
    string aux;
    return aux;
}


