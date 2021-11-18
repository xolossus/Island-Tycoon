//
// Created by Rodrigo on 16/11/2021.
//

#ifndef POO_TRABALHO_ILHA_H
#define POO_TRABALHO_ILHA_H

#include "Edificios.h"
#include "Zonas.h"
#include "Trabalhadores.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <iomanip>

class Zonas;

using namespace std;
class Ilha{
    int MaxLinhaCriar, MaxColunaCriar, MaxLinha, MaxColuna;
    vector<vector<Zonas>> zonailha;
    vector<vector<string>> stuff;
    int** TrabCounter;
public:
    Ilha();
    //void adicionaZona();
    void CriaIlha();
    string ValidaTrabalhadores(string valida);
    void getstuff();
    int getColuna();
    int getLinha();
    int setCountTrab(int linha, int coluna);
    void RandomSizeLinha();
    void RandomSizeColuna();
};

#endif //POO_TRABALHO_ILHA_H
