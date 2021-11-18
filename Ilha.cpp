//
// Created by Rodrigo on 16/11/2021.
//

#include "Ilha.h"

void Ilha::CriaIlha()
{
    string auxzo, auxed, auxtr, auxcont;
    Zonas *obj;
    srand(time(NULL));
    vector<string>aux;

    for (int i = 0; i < MaxLinhaCriar; i++)
    {
        vector<Zonas> temp;
        for (int j = 0; j < MaxColunaCriar; j++)
        {
            obj = new Zonas();
            temp.push_back(obj);
        }
        zonailha.push_back(temp);
    }
}

vector<vector<string>> Ilha::getstuff()
{
    int k=0, h=0, g=0, y=0, aux;
    cout << "\n" << (char)218;
    do
    {
        if(h%5==4)
        {
            cout << (char)194;
        }
        else
        {
            cout << (char)196;
        }
        h++;
    }while(h<(MaxLinha*MaxLinhaCriar)-1 || !(h%5));
    cout << (char)191 << "\n";

    //cout << zonailha[0][1].getAsString() + "\n";
    for (int i = 0; i < zonailha[0].size(); i++)
    {
        k=i;
        for (int j = 0; j < zonailha.size(); j++)
        {
            cout << zonailha[j][i].getZonasTipo();
            if(j == zonailha.size()-1)
            {
                cout << (char)179;
            }
            //cout << zonailha[j][i].getAsString(); //const auto& row = stuff[j];
            //string colVal = to_string(row.at(i));
            //cout << colVal;
            //cout << stuff[i][j];
            //cout << i << "-" << j;
        }
        cout << "\n";
        for(int q = 0; q < zonailha.size(); q++)
        {
            cout << zonailha[q][i].getEdTipo();
            if(q == zonailha.size()-1)
            {
                cout << (char)179;
            }
        }
        cout << "\n";
        for(int w = 0; w < zonailha.size(); w++)
        {
            cout << ValidaTrabalhadores(zonailha[w][i].getTrabTipo());
            if(w == zonailha.size()-1)
            {
                cout << (char)179;
            }
        }
        cout << "\n";
        for(int e = 0; e < zonailha.size(); e++)
        {
            cout << (char)179;
            cout << zonailha[e][i].getCountTrab();
            cout << "   ";
            if(e == zonailha.size()-1)
            {
                cout << (char)179;
            }
        }
        //cout << "\n";
        if(k%1 == 0 && k!=4)
        {
            cout << "\n" << (char)195;
            y=0;
            do
            {
                if(y%5 == 4)
                {
                    cout << (char)197;
                }
                else
                {
                    cout << (char)196;
                }
                y++;
            }while(y<(MaxLinha*MaxLinhaCriar)-1 || !(y%5));
            cout << (char)180;
        }
        if(k==4)
        {
            cout << "\n" << (char)192;
            do
            {
                if(g%5 == 4)
                {
                    cout << (char)193;
                }
                else
                {
                    cout << (char)196;
                }
                g++;
            }while(g<(MaxLinha*MaxLinhaCriar)-1 || !(g%5));
            cout << (char)217;
        }
        cout << "\n";
    }
    return stuff;
}

string Ilha::ValidaTrabalhadores(string valida)
{
    string auxtr;
    auxtr = valida;

    if (auxtr == "O" || auxtr == "M" || auxtr == "L")
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
                else
                {
                    auxtr = (char)179;
                    auxtr += "    ";
                }
            }
        }
    }
    valida = auxtr;
    return valida;
}

Ilha::Ilha()
{
    this->CriaIlha();
}

int Ilha::getColuna() {
    return MaxColuna;
}

int Ilha::getLinha() {
    return MaxLinha;
};

int Ilha::setCountTrab(int linha, int coluna)
{
    return 1123;
}

