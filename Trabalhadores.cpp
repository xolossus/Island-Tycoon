//
// Created by Rodrigo on 16/11/2021.
//

#include "Trabalhadores.h"

string Trabalhadores::NomeTrab()
{
    int temp=0;

    temp = rand() % (tipoTrab.size());

    return tipoTrab[temp];
}

int Trabalhadores::ContaTrab()
{
    int count=0;

}

string Trabalhadores::ValidaTrabalhadores(string valida)
{
    string auxtr;
    auxtr = valida;

    if (auxtr == "O" || auxtr == "M" || auxtr == "L" || auxtr == " ")
    {
        auxtr = auxtr + "   |";
    }else
    {
        if (auxtr == "OO" || auxtr == "MM" || auxtr == "LL")
        {
            auxtr = auxtr + "  |";
        }else
        {
            if (auxtr == "OOO" || auxtr == "MMM" || auxtr == "LLL")
            {
                auxtr = auxtr + " |";
            }else
            {
                if (auxtr == "OOOO" || auxtr == "MMMM" || auxtr == "LLLL")
                {
                    auxtr = auxtr + "|";
                }
            }
        }
    }
    valida = auxtr;
    return valida;
}

Trabalhadores::Trabalhadores() {}

Trabalhadores::Trabalhadores(Trabalhadores *pTrabalhadores) {

}

