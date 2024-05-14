#include "../personagens-hpp/Madruga.hpp"

Madruga::Madruga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Madruga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Madruga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Madruga::pegarDescricao() 
{
    return "O que que foi, o que que foi, o que que há?";
}