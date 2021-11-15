//
// Created by Rodrigo on 12/11/2021.
//

#include "Comandos.h"
#include "Auxiliares.h"

using namespace std;

bool interface::comandos()
{
    string aux, coms, palavra_aux;
    vector<string> tokens;
    int i=0;

    aux.clear();

    cout << "Insira um comando: " << endl;
    getline(cin, aux);
    if(aux.empty())
    {
        cout << "Comando vazio ou inválido." << endl;
        return false;
    }
    else
    {
        tokens = DividirString(aux);
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
            //placeholder função de carregar  ficheiro
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
                        if(VerificaIntString(tokens[2])) //falta por limites dos tabuleiros nos verificaintstrings
                        {
                            if(VerificaIntString(tokens[3]))
                            {
                                //placeholder função de construir
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
                    if(VerificaIntString(tokens[1]))
                    {
                        if(VerificaIntString(tokens[2]))
                        {
                            //placeholder função para ligar o edificio
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
                        if(VerificaIntString(tokens[1]))
                        {
                            if(VerificaIntString(tokens[2]))
                            {
                                //placeholder função para desligar o edificio
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
                            if(VerificaIntString(tokens[1]))
                            {
                                if(VerificaIntString(tokens[2]))
                                {
                                    if(VerificaIntString(tokens[3]))
                                    {
                                        //placeholder função mover o trabalhador
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
                                    if(VerificaIntString(tokens[2]))
                                    {
                                        //placeholder funcao vender <tipo><quanto>
                                    }
                                    else
                                    {
                                        cout << "\n Comando invalido!" << endl;
                                        return false;
                                    }
                                }
                                else
                                {
                                    if(VerificaIntString(tokens[1]))
                                    {
                                        if(VerificaIntString(tokens[2]))
                                        {
                                            //placeholder funcao vender <linha><coluna>
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
                                        //placeholder função contratar trabalhador
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
                                        if(VerificaIntString(tokens[1]))
                                        {
                                            if(VerificaIntString(tokens[2]))
                                            {
                                                //placeholder função list
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
                                            //placeholder função next
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
                                                if(!VerificaIntString(tokens[1]))
                                                {
                                                    //placeholder funcao save
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
                                                    if(!VerificaIntString(tokens[1]))
                                                    {
                                                        //placeholder funcao load
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
                                                        if(!VerificaIntString(tokens[1]))
                                                        {
                                                            //placeholder funcao apaga
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
                                                            if(!VerificaIntString(tokens[1]))
                                                            {
                                                                //placeholder funcao ler o ficheiro config
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
                                                                if(VerificaIntString(tokens[1]))
                                                                {
                                                                    //placeholder funcao adicionar quantia €
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
                                                                            if(VerificaIntString(tokens[2])) //falta por limites dos tabuleiros nos verificaintstrings
                                                                            {
                                                                                if(VerificaIntString(tokens[3]))
                                                                                {
                                                                                    //placeholder função de adicionar edificio a custo zero
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
                                                                        if(VerificaIntString(tokens[1]))
                                                                        {
                                                                            //placeholder funcao remover trabalhador com ID
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

vector<string> interface::DividirString(string comando)
{
    string aux;
    vector<string> tokens;
    stringstream ss(comando);

    while(getline(ss, aux, ' ')) //transfere o conteudo de ss para aux até encontrar um espaço
    {
        tokens.push_back(aux);
    }
    return tokens;
}

bool interface::VerificaIntString(string x)
{
    for (int i = 0; i < (int)x.size(); i++)
    {
        if (!isdigit(x[i]))
        {
            return false;
        }
    }
    return true;
}

interface::interface()
{
}
