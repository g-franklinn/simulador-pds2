#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pistola.hpp"

Pistola::Pistola(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pistola::gerarForcaAtaque()
{
    return maxForca;
}

string Pistola::gerarRuidoAtaque()
{
    return "tá tá tá";
}
