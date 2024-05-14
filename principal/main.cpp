#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Marreta.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Pistola.hpp"
#include "../acessorios-hpp/Granada.hpp"
#include "../acessorios-hpp/Porrete.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Barril.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Cotoveleira.hpp"
#include "../acessorios-hpp/Capa.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Chapolin.hpp"
#include "../personagens-hpp/Girafales.hpp"
#include "../personagens-hpp/Kiko.hpp"
#include "../personagens-hpp/Madruga.hpp"
#include "../personagens-hpp/Nhonho.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Marreta("Marreta Bionica",12,60);
    ArmaAtaque* arma4 = new Espada("Espada de Ouro",21,63);
    ArmaAtaque* arma5 = new Pistola("Super Pistola Atomica",45,90);
    ArmaAtaque* arma6 = new Granada("Granada de Pregos",95,100);
    ArmaAtaque* arma7 = new Porrete("Porrete de Chumbo",8,50);

    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* barril = new Barril("Barril de Maneira", 7);
    ArmaDefesa* capa = new Capa("Capa de Chuva", 12);
    ArmaDefesa* capacete = new Capacete("Aço", 30);
    ArmaDefesa* cotoveleira = new Cotoveleira("Super Cotoveleira", 18);
    ArmaDefesa* armadura = new Armadura("Armadura de Ouro", 50);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Chaves(2, "Chaves Eq1 - Reserva", 100, arma, barril);
    Personagem* p2 = new Chaves(3, "Chaves Eq2", 40, arma, escudo);
    Personagem* p4 = new Chapolin(4, "Chapolin Colorado", 100, arma3, capa);
    Personagem* p5 = new Madruga(5, "Seu Madruga", 100, arma5, escudo);
    Personagem* p6 = new Girafales(6, "Professor Girafales", 100, arma7, cotoveleira);
    Personagem* p7 = new Kiko(7, "Kiko", 100, arma4, armadura);
    Personagem* p8 = new Nhonho(8, "Nhonho", 100, arma6, cotoveleira);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 1);
    simulador->adicionarPersonagem(p8, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}