#ifndef CHAPOLIN
#define CHAPOLIN
#include "../core-simulador-hpp/Personagem.hpp"
class Chapolin : public Personagem
{
    public:
        Chapolin(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif