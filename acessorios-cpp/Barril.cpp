#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Barril.hpp"

Barril::Barril(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Barril::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Barril::getResistencia() 
{
    return this->resistencia;
}