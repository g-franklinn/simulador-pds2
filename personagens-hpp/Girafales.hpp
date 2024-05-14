#ifndef GIRAFALES
#define GIRAFALES
#include "../core-simulador-hpp/Personagem.hpp"
class Girafales : public Personagem
{
    public:
        Girafales(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif