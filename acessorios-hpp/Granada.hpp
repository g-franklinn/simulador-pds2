#ifndef GRANADA
#define GRANADA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Granada : public ArmaAtaque
{
    public:
        Granada(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif