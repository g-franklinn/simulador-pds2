#ifndef PORRETE
#define PORRETE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Porrete : public ArmaAtaque
{
    public:
        Porrete(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif