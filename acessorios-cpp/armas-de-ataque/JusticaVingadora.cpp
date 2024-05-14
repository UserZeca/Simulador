#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/armas-de-ataque/JusticaVingadora.hpp"

JusticaVingadora::JusticaVingadora(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int JusticaVingadora::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string JusticaVingadora::gerarRuidoAtaque()
{
    return "CRASH! CRASH!";
}
