#include "../personagens-hpp/Chapolin.hpp"

Chapolin::Chapolin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Chapolin::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Chapolin::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Chapolin::pegarDescricao() 
{
    return "Palma, palma, não priemos cânico!";
}