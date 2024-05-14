#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Marreta.hpp"

Marreta::Marreta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Marreta::gerarForcaAtaque()
{
    return maxForca;
}

string Marreta::gerarRuidoAtaque()
{
    return "ploc ploc";
}
