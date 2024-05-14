#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/armas-de-ataque/Refrispingarda.hpp"

Refrispingarda::Refrispingarda(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Refrispingarda::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Refrispingarda::gerarRuidoAtaque()
{
    return "FRIOOSH FRIOOSH";
}
