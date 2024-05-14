#include "../personagens-hpp/Nhonho.hpp"

Nhonho::Nhonho(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Nhonho::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Nhonho::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Nhonho::pegarDescricao() 
{
    return "Olha ele, olha ele, hein, olha ele!";
}