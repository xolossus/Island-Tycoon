//
// Created by Rodrigo on 16/11/2021.
//

#include "Trabalhadores.h"

string Trabalhadores::NomeTrab()
{
    int temp;

    temp = rand() % (tipoTrab.size());

    return ValidaTrabalhadores(tipoTrab[temp]);
}

string Trabalhadores::ValidaTrabalhadores(string valida)
{
    string auxtr;
    auxtr = valida;

    if (auxtr == "O" || auxtr == "M" || auxtr == "L" || auxtr == " ")
    {
        auxtr = (char)179 + auxtr + "   ";
    }else
    {
        if (auxtr == "OO" || auxtr == "MM" || auxtr == "LL")
        {
            auxtr = (char)179 + auxtr + "  ";
        }else
        {
            if (auxtr == "OOO" || auxtr == "MMM" || auxtr == "LLL")
            {
                auxtr = (char)179 + auxtr + " ";
            }else
            {
                if (auxtr == "OOOO" || auxtr == "MMMM" || auxtr == "LLLL")
                {
                    auxtr = (char)179 + auxtr + "";
                }
            }
        }
    }
    valida = auxtr;
    return valida;
}

void Trabalhadores::setTipo(int aux)
{
    this->TrabalhadoresTipo = tipoTrab[aux];
}

Trabalhadores::Trabalhadores()
{
    //this->TrabalhadoresTipo = NomeTrab();
}

Trabalhadores::Trabalhadores(Trabalhadores *pTrabalhadores) {
    this->TrabalhadoresTipo = NomeTrab();
}

string Trabalhadores::getTrabTipo() {
    return TrabalhadoresTipo;
}




