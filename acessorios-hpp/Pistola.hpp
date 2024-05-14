#ifndef PISTOLA
#define PISTOLA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pistola : public ArmaAtaque
{
    public:
        Pistola(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif