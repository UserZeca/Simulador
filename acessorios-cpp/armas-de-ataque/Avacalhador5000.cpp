#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/armas-de-ataque/Avacalhador5000.hpp"

Avacalhador5000::Avacalhador5000(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Avacalhador5000::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Avacalhador5000::gerarRuidoAtaque()
{
    return "BLAMO BLAMO";
}
