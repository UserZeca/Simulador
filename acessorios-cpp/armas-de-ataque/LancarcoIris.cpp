#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/armas-de-ataque/LancarcoIris.hpp"

LancarcoIris::LancarcoIris(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int LancarcoIris::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string LancarcoIris::gerarRuidoAtaque()
{
    return "BRILHANTEE BRILHANTEE";
}
