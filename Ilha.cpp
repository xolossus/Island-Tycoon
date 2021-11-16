//
// Created by Rodrigo on 16/11/2021.
//

#include "Ilha.h"

void Ilha::CriaIlha()
{
    edificio.push_back(new Edificios());
    zona.push_back(new Zonas());
    trabalhadores.push_back(new Trabalhadores());
}

void Ilha::MostraIlha()
{
    Edificios edificioilha;
    Zonas zonailha;
    Trabalhadores trabalhadoresilha;
    string auxzo, auxed, auxtr, auxcont;
    srand(time(NULL));
    vector<vector<string>> stuff;
    //fill the inner vector, then insert it into the outer vector
    for (int i = 0; i < 5; i++)
    {
        vector<string>temp;
        for (int j = 0; j < 4; j++)
        {
            auxzo = zonailha.ZonasNome();
            auxzo = zonailha.ValidaZona(auxzo);
            auxed = edificioilha.EdificioNome();
            auxed = edificioilha.ValidaEdificio(auxed);
            auxtr = trabalhadoresilha.NomeTrab();
            auxtr = trabalhadoresilha.ValidaTrabalhadores(auxtr);
            temp.push_back(auxzo);
            temp.push_back(auxed);
            temp.push_back(auxtr);
        }
        stuff.push_back(temp);
    }
    for (int i = 0; i < stuff.size(); i++)
    {
        for (int j = 0; j < stuff[i].size(); j++)
        {
            cout << i;
            cout << "-" << j;
            cout << stuff[i][j];
        }
        cout << "\n";
    }

    //display all elements ...
    /*
    string tabZonas[4][5];
    string tabEdif[4][5];
    string tabTrab[4][5];
    string tabCount[4][5];

    for (int linha=0; linha<MaxLinha; linha++)
    {
        for (int coluna=0; coluna<MaxColuna; coluna++)
        {
            auxzo = zonailha.ZonasNome();
            auxzo = zonailha.ValidaZona(auxzo);
            auxed = edificioilha.EdificioNome();
            auxed = edificioilha.ValidaEdificio(auxed);
            auxtr = trabalhadoresilha.NomeTrab();
            auxtr = trabalhadoresilha.ValidaTrabalhadores(auxtr);
            tabZonas[linha][coluna] = auxzo;
            tabEdif[linha][coluna] = auxed;
            tabTrab[linha][coluna] = auxtr;
        }
    }

    for (int coluna=0; coluna<MaxColuna; coluna++)
    {
        for (int linha = 0; linha < MaxLinha; linha++)
        {
            cout << tabZonas[linha][coluna] << " ";
            cout << tabEdif[linha][coluna] << " ";
            cout << tabTrab[linha][coluna] << " ";
        }
        cout << "\n-----------------------\n";
    }
*/
/*
    for(int i=0; i<3; i++)
    {
        auxzo = zonailha.ZonasNome();
        cout << auxzo;
        zonailha.ValidaZona(auxzo);
        cout << "\n";
        auxed = edificioilha.EdificioNome();
        cout << auxed;
        edificioilha.ValidaEdificio(auxed);
        cout << "\n";
        auxtr = trabalhadoresilha.NomeTrab();
        cout << auxtr;
        trabalhadoresilha.ValidaTrabalhadores(auxtr);
        cout << "\n";
        cout << "cont|";
        cout << "\n--------------------\n";
    }*/
}

Ilha::Ilha(){};
