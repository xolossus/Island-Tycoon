//
// Created by Rodrigo on 12/11/2021.
//

#include "Auxiliares.h"

auxiliares::auxiliares() {}

/*vector<string> auxiliares::DividirString(string comando)
{
    string aux;
    vector<string> tokens;
    stringstream ss(comando);

    while(getline(ss, aux, ' ')) //transfere o conteudo de ss para aux até encontrar um espaço
    {
        tokens.push_back(aux);
    }
    return tokens;
}*/

void execfiles(string nomefich)
{
    string linha;
    int num;
    vector <string> tokens;
    ifstream ficheiro(nomefich);
    if(ficheiro.is_open())
    {
        while(getline(ficheiro, linha))
        {
            tokens = interface::DividirString(linha);
        }
        ficheiro.close();
    }
    else
    {
        cout << "Erro ao abrir o ficheiro." << endl;
    }
}
