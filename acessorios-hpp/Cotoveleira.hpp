#ifndef COTOVELEIRA
#define COTOVELEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Cotoveleira : public ArmaDefesa
{
    public:
        Cotoveleira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif