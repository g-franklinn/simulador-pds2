#include "../personagens-hpp/Girafales.hpp"

Girafales::Girafales(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Girafales::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Girafales::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Girafales::pegarDescricao() 
{
    return "Vim lhe trazer este humilde presente";
}