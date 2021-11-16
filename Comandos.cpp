//
// Created by Rodrigo on 12/11/2021.
//

#include "Comandos.h"
#include "Auxiliares.h"

using namespace std;

bool Comandos::ValidaComandos(string aux)
{
    string coms, palavra_aux;
    vector<string> tokens;
    int i=0;
    //utilizar a meter os comandos

    if(aux.empty())
    {
        cout << "Comando vazio ou inválido." << endl;
        return false;
    }
    else
    {
        tokens = auxiliar->DividirString(aux);
        coms = tokens[i];
        i++;

        if(tokens[0] == "exec")
        {
            if(tokens.size()>2)
            {
                cout << "Erro! Demasiados argumentos." << endl;
                return false;
            }
            if(tokens.size()<2)
            {
                cout << "Erro! Poucos argumentos." << endl;
                return false;
            }
            palavra_aux = tokens[i];
            FileInicial(palavra_aux);
        }
        else
        {
            if(tokens[0] == "cons")
            {
                if(tokens.size()>4)
                {
                    cout << "Erro! Demasiados argumentos." << endl;
                    return false;
                }
                if(tokens.size()<4)
                {
                    cout << "Erro! Poucos argumentos." << endl;
                    return false;
                }
                if(tokens.size()== 4)//does zero shit
                {
                    if(tokens[1] == "minaf" || tokens[1] == "minac" || tokens[1] == "central" || tokens[1] == "bat" || tokens[1] == "fund" || tokens[1] == "edx")
                    {
                        if(auxiliar->VerificaIntString(tokens[2])) //falta por limites dos tabuleiros nos verificaintstrings
                        {
                            if(auxiliar->VerificaIntString(tokens[3]))
                            {
                                cout << "placeholder funcao de construir\n";
                            }
                            else
                            {
                                cout << "\n Comando invalido!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "\n Comando invalido!" << endl;
                            return false;
                        }
                    }
                    else
                    {
                        cout << "\n Comando invalido!" << endl;
                        return false;
                    }
                }
            }
            else
            {
                if(tokens[0] == "liga")
                {
                    if(tokens.size()>3)
                    {
                        cout << "Erro! Demasiados argumentos." << endl;
                        return false;
                    }
                    if(tokens.size()<3)
                    {
                        cout << "Erro! Poucos argumentos." << endl;
                        return false;
                    }
                    if(auxiliar->VerificaIntString(tokens[1]))
                    {
                        if(auxiliar->VerificaIntString(tokens[2]))
                        {
                            cout << "placeholder funcao para ligar o edificio\n";
                        }
                        else
                        {
                            cout << "\n Comando invalido!" << endl;
                            return false;
                        }
                    }
                    else
                    {
                        cout << "\n Comando invalido!" << endl;
                        return false;
                    }
                }
                else
                {
                    if(tokens[0] == "des")
                    {
                        if(tokens.size()>3)
                        {
                            cout << "Erro! Demasiados argumentos." << endl;
                            return false;
                        }
                        if(tokens.size()<3)
                        {
                            cout << "Erro! Poucos argumentos." << endl;
                            return false;
                        }
                        if(auxiliar->VerificaIntString(tokens[1]))
                        {
                            if(auxiliar->VerificaIntString(tokens[2]))
                            {
                                cout << "placeholder funcao para desligar o edificio\n";
                            }
                            else
                            {
                                cout << "\n Comando invalido!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "\n Comando invalido!" << endl;
                            return false;
                        }
                    }
                    else
                    {
                        if(tokens[0] == "move")
                        {
                            if(tokens.size()>4)
                            {
                                cout << "Erro! Demasiados argumentos." << endl;
                                return false;
                            }
                            if(tokens.size()<4)
                            {
                                cout << "Erro! Poucos argumentos." << endl;
                                return false;
                            }
                            if(auxiliar->VerificaIntString(tokens[1]))
                            {
                                if(auxiliar->VerificaIntString(tokens[2]))
                                {
                                    if(auxiliar->VerificaIntString(tokens[3]))
                                    {
                                        cout << "placeholder funcao mover o trabalhador\n";
                                    }
                                    else
                                    {
                                        cout << "\n Comando invalido!" << endl;
                                        return false;
                                    }
                                }
                                else
                                {
                                    cout << "\n Comando invalido!" << endl;
                                    return false;
                                }
                            }
                            else
                            {
                                cout << "\n Comando invalido!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            if(tokens[0] == "vende")
                            {
                                if(tokens.size()>3)
                                {
                                    cout << "Erro! Demasiados argumentos." << endl;
                                    return false;
                                }
                                if(tokens.size()<3)
                                {
                                    cout << "Erro! Poucos argumentos." << endl;
                                    return false;
                                }
                                if(tokens[1] == "ferro" || tokens[1] == "aco" || tokens[1] == "carvao" || tokens[1] == "mad" || tokens[1] == "viga" || tokens[1] == "eletr")
                                {
                                    if(auxiliar->VerificaIntString(tokens[2]))
                                    {
                                        cout << "placeholder funcao vender <tipo><quanto>\n";
                                    }
                                    else
                                    {
                                        cout << "\n Comando invalido!" << endl;
                                        return false;
                                    }
                                }
                                else
                                {
                                    if(auxiliar->VerificaIntString(tokens[1]))
                                    {
                                        if(auxiliar->VerificaIntString(tokens[2]))
                                        {
                                            cout << "placeholder funcao vender <linha><coluna>";
                                        }
                                        else
                                        {
                                            cout << "\n Comando invalido!" << endl;
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        cout << "\n Comando invalido!" << endl;
                                        return false;
                                    }
                                }
                            }
                            else
                            {
                                if(tokens[0] == "cont")
                                {
                                    if(tokens.size()>2)
                                    {
                                        cout << "Erro! Demasiados argumentos." << endl;
                                        return false;
                                    }
                                    if(tokens.size()<2)
                                    {
                                        cout << "Erro! Poucos argumentos." << endl;
                                        return false;
                                    }
                                    if(tokens[1] == "oper" || tokens[1] == "len" || tokens[1] == "miner")
                                    {
                                        cout << "placeholder funcao contratar trabalhador\n";
                                    }
                                    else
                                    {
                                        cout << "\n Comando invalido!" << endl;
                                        return false;
                                    }
                                }
                                else
                                {
                                    if(tokens[0] == "list")
                                    {
                                        if(tokens.size()>3)
                                        {
                                            cout << "Erro! Demasiados argumentos." << endl;
                                            return false;
                                        }
                                        if(tokens.size()<3)
                                        {
                                            cout << "Erro! Poucos argumentos." << endl;
                                            return false;
                                        }
                                        if(auxiliar->VerificaIntString(tokens[1]))
                                        {
                                            if(auxiliar->VerificaIntString(tokens[2]))
                                            {
                                                cout << "placeholder funcao list\n";
                                            }
                                            else
                                            {
                                                cout << "\n Comando invalido!" << endl;
                                                return false;
                                            }
                                        }
                                        else
                                        {
                                            cout << "\n Comando invalido!" << endl;
                                            return false;
                                        }
                                    }
                                    else
                                    {
                                        if(tokens[0] == "next")
                                        {
                                            if(tokens.size()>1)
                                            {
                                                cout << "Erro! Demasiados argumentos." << endl;
                                                return false;
                                            }
                                            if(tokens.size()<1)
                                            {
                                                cout << "Erro! Poucos argumentos." << endl;
                                                return false;
                                            }
                                            cout << "placeholder funcao next\n";
                                        }
                                        else
                                        {
                                            if(tokens[0] == "save")
                                            {
                                                if(tokens.size()>2)
                                                {
                                                    cout << "Erro! Demasiados argumentos." << endl;
                                                    return false;
                                                }
                                                if(tokens.size()<2)
                                                {
                                                    cout << "Erro! Poucos argumentos." << endl;
                                                    return false;
                                                }
                                                if(!auxiliar->VerificaIntString(tokens[1]))
                                                {
                                                    cout << "placeholder funcao save\n";
                                                }
                                                else
                                                {
                                                    cout << "\n Comando invalido!" << endl;
                                                    return false;
                                                }
                                            }
                                            else
                                            {
                                                if(tokens[0] == "load")
                                                {
                                                    if(tokens.size()>2)
                                                    {
                                                        cout << "Erro! Demasiados argumentos." << endl;
                                                        return false;
                                                    }
                                                    if(tokens.size()<2)
                                                    {
                                                        cout << "Erro! Poucos argumentos." << endl;
                                                        return false;
                                                    }
                                                    if(!auxiliar->VerificaIntString(tokens[1]))
                                                    {
                                                        cout << "placeholder funcao load\n";
                                                    }
                                                    else
                                                    {
                                                        cout << "\n Comando invalido!" << endl;
                                                        return false;
                                                    }
                                                }
                                                else
                                                {
                                                    if(tokens[0] == "apaga")
                                                    {
                                                        if(tokens.size()>2)
                                                        {
                                                            cout << "Erro! Demasiados argumentos." << endl;
                                                            return false;
                                                        }
                                                        if(tokens.size()<2)
                                                        {
                                                            cout << "Erro! Poucos argumentos." << endl;
                                                            return false;
                                                        }
                                                        if(!auxiliar->VerificaIntString(tokens[1]))
                                                        {
                                                            cout << "placeholder funcao apaga\n";
                                                        }
                                                        else
                                                        {
                                                            cout << "\n Comando invalido!" << endl;
                                                            return false;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if(tokens[0] == "config")
                                                        {
                                                            if(tokens.size()>2)
                                                            {
                                                                cout << "Erro! Demasiados argumentos." << endl;
                                                                return false;
                                                            }
                                                            if(tokens.size()<2)
                                                            {
                                                                cout << "Erro! Poucos argumentos." << endl;
                                                                return false;
                                                            }
                                                            if(!auxiliar->VerificaIntString(tokens[1]))
                                                            {
                                                                cout << "placeholder funcao ler o ficheiro config\n";
                                                            }
                                                            else
                                                            {
                                                                cout << "\n Comando invalido!" << endl;
                                                                return false;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if(tokens[0] == "debcash")
                                                            {
                                                                if(tokens.size()>2)
                                                                {
                                                                    cout << "Erro! Demasiados argumentos." << endl;
                                                                    return false;
                                                                }
                                                                if(tokens.size()<2)
                                                                {
                                                                    cout << "Erro! Poucos argumentos." << endl;
                                                                    return false;
                                                                }
                                                                if(auxiliar->VerificaIntString(tokens[1]))
                                                                {
                                                                    cout << "placeholder funcao adicionar quantia €\n";
                                                                }
                                                                else
                                                                {
                                                                    cout << "\n Comando invalido!" << endl;
                                                                    return false;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                if(tokens[0] == "debed")
                                                                {
                                                                    if(tokens.size()>4)
                                                                    {
                                                                        cout << "Erro! Demasiados argumentos." << endl;
                                                                        return false;
                                                                    }
                                                                    if(tokens.size()<4)
                                                                    {
                                                                        cout << "Erro! Poucos argumentos." << endl;
                                                                        return false;
                                                                    }
                                                                    if(tokens.size()== 4)//does zero shit
                                                                    {
                                                                        if(tokens[1] == "minaf" || tokens[1] == "minac" || tokens[1] == "central" || tokens[1] == "bat" || tokens[1] == "fund" || tokens[1] == "edx")
                                                                        {
                                                                            if(auxiliar->VerificaIntString(tokens[2])) //falta por limites dos tabuleiros nos verificaintstrings
                                                                            {
                                                                                if(auxiliar->VerificaIntString(tokens[3]))
                                                                                {
                                                                                    cout << "placeholder funcao de adicionar edificio a custo zero\n";
                                                                                }
                                                                                else
                                                                                {
                                                                                    cout << "\n Comando invalido!" << endl;
                                                                                    return false;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                cout << "\n Comando invalido!" << endl;
                                                                                return false;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            cout << "\n Comando invalido!" << endl;
                                                                            return false;
                                                                        }
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    if(tokens[0] == "debkill")
                                                                    {
                                                                        if(tokens.size()>2)
                                                                        {
                                                                            cout << "Erro! Demasiados argumentos." << endl;
                                                                            return false;
                                                                        }
                                                                        if(tokens.size()<2)
                                                                        {
                                                                            cout << "Erro! Poucos argumentos." << endl;
                                                                            return false;
                                                                        }
                                                                        if(auxiliar->VerificaIntString(tokens[1]))
                                                                        {
                                                                            cout << "placeholder funcao remover trabalhador com ID\n";
                                                                        }
                                                                        else
                                                                        {
                                                                            cout << "\n Comando invalido!" << endl;
                                                                            return false;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

void Comandos::FileInicial(string nomefich)
{
    string linha, aux;
    vector <string> tokens;
    ifstream ficheiro;

    ficheiro.open("../" + nomefich);

    if(!ficheiro)
    {
        cout << "Erro ao abrir o ficheiro!" << endl;
    }
    else
    {
        if(ficheiro.is_open())
        {
            while(!ficheiro.eof())
            {
                getline(ficheiro, aux);
                ValidaComandos(aux);
            }
            ficheiro.close();
        }
        else
        {
            cout << "Erro ao abrir o ficheiro!2" << endl;
        }
    }
}


Comandos::Comandos()
{
    this->auxiliar=new Auxiliares();
}
