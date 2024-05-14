#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Granada.hpp"

Granada::Granada(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Granada::gerarForcaAtaque()
{
    return maxForca;
}

string Granada::gerarRuidoAtaque()
{
    return "KABUM";
}
