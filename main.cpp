#include <iostream>
#include "Comandos.h"
#include "Ilha.h"

using namespace std;

int main()
{
    Comandos coman;
    Ilha *ilh = new Ilha();
    //vector<vector<string>> stuff;
    string aux, aux2;
    aux.clear();
    ilh->getstuff();
    cout << "Insira um comando: " << endl;
    getline(cin, aux);
    coman.ValidaComandos(aux);
    aux2 = "teste.txt";
    cout << aux2 << "\n";
    ilh->getstuff();
    //coman.FileInicial(aux2);
    //ilh.CriaIlha();

}
