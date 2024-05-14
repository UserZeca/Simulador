#include <iostream>
#include <string>
#include "../acessorios-hpp/Acessorios.hpp"
#include "../personagens-hpp/Personagens.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{   
    #pragma region Armas de Defesa e Ataque antigas
        ArmaAtaque* colherDePata = new Colher("Colher de Pata",0,50);
        ArmaDefesa* escudo = new Escudo("Latão", 1);
     /* ArmaAtaque* arma = new Rosa("Super Rosa Amarela", 0, 10);
      */
    #pragma endregion

    #pragma region Novas Armas de Ataque e Defesa

        /* Armas de Ataque */
        ArmaAtaque* avacalhadora5000 = new Avacalhador5000("Uma escopeta imponente", 0, 90);
        ArmaAtaque* justicaVingadora = new JusticaVingadora("Uma marreta imponente, forjada na fúria e no desejo de vingança.", 0, 81);
        ArmaAtaque* lancarcoIris = new LancarcoIris("Uma arma mágica e colorida, capaz de espalhar alegria e destruição em igual medida.", 0, 90);
        ArmaAtaque* pavioCurto = new PavioCurto("Uma espingarda de cano duplo com um toque de explosão e audácia.", 0, 90);
        ArmaAtaque* refrisgarda = new Refrispingarda("Uma espingarda de aparência gélida, emanando uma aura de frieza e congelamento.", 60, 90);

        /* Armas de Defesa */
        ArmaDefesa* barraDeDolokohs = new BarraDeDalokohs("Um delicioso chocolate russo, envolto em mistério e poder regenerativo.", 100);
        ArmaDefesa* descobridorDosSeteMares = new DescobridordosSeteMares("Um lança-foguetes adornado com temas náuticos.",112);
        ArmaDefesa* escudoEsplendido = new EscudoEsplendido("Um escudo majestoso, emanando uma aura de grandeza e proteção.",90);
        ArmaDefesa* sandviche = new Sandviche("Um lanche generoso e reconfortante, envolto em papel alumínio e repleto de pedaços suculentos de carne e verduras frescas.",50);
        ArmaDefesa* tarjaDeInvestida = new TarjaDeInvestida("Um escudo adornado com símbolos de investida, emitindo uma aura de determinação e agressividade.",70);
    #pragma endregion


    #pragma region Simulação e Personagens antigos

      /*Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
        Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 100, arma, escudo);
        Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo);
        Personagem* p4 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma, escudo);

        Simulador* simulador = new Simulador();
        simulador->adicionarPersonagem(p1, 1);
        simulador->adicionarPersonagem(p2, 2);
        simulador->adicionarPersonagem(p3, 1);
        simulador->adicionarPersonagem(p4, 2);
    
        simulador->iniciarSimulacao();
        */
    #pragma endregion

        Personagem* heavyRed = new Heavy(1, "Heavy vermelho", 300, avacalhadora5000, sandviche);
        Personagem* pyroRed = new Pyro(1, "Pyro vermelho", 150, lancarcoIris, barraDeDolokohs);
        Personagem* soldierRed = new Soldier(1, "Soldir vermelho", 200, justicaVingadora, tarjaDeInvestida);
        Personagem* scoutRed = new Scout(1, "Scout vermelho", 150, refrisgarda, descobridorDosSeteMares);


        Personagem* chavesBlue = new Chaves(2, "Chaves Azul", 100, lancarcoIris, tarjaDeInvestida);
        Personagem* demomanBlue = new Demoman(2, "Demoman Azul", 200, justicaVingadora, sandviche);
        Personagem* pyroBlue = new Pyro(2, "Pyro Azul", 150, colherDePata, escudoEsplendido);
        Personagem* soldierBlue = new Soldier(2, "Soldir Azul", 200, pavioCurto, escudo);

        Simulador* simulador = new Simulador();
       
        simulador->adicionarPersonagem(heavyRed, 1);
        simulador->adicionarPersonagem(pyroRed, 1);
        simulador->adicionarPersonagem(scoutRed, 1);

        // Time Azul
        simulador->adicionarPersonagem(chavesBlue, 2);
        simulador->adicionarPersonagem(demomanBlue, 2);    
        simulador->adicionarPersonagem(soldierBlue, 2);

        simulador->iniciarSimulacao();

    return 0;
}