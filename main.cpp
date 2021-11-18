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
    do
    {
        cout << "Insira um comando: " << endl;
        getline(cin, aux);
        if(coman.ValidaComandos(aux))
        {
            ilh->getstuff();
        }
    }while(aux!="sair");
    coman.ValidaComandos(aux);
    //aux2 = "teste.txt";
    //cout << aux2 << "\n";
    //coman.FileInicial(aux2);
    //ilh.CriaIlha();

}
