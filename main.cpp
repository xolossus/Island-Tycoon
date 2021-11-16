#include <iostream>
#include "Comandos.h"
#include "Auxiliares.h"
#include "Ilha.h"

using namespace std;

int main()
{
    Comandos coman;
    Ilha ilh;
    vector<vector<string>> stuff;
    string aux, aux2;
    aux.clear();
    //cout << "Insira um comando: " << endl;
    //getline(cin, aux);
    aux2 = "teste.txt";
    cout << aux2 << "\n";
    coman.FileInicial(aux2);
    ilh.CriaIlha();
    ilh.MostraIlha();

}
