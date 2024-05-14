#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Cotoveleira.hpp"

Cotoveleira::Cotoveleira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Cotoveleira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Cotoveleira::getResistencia() 
{
    return this->resistencia;
}