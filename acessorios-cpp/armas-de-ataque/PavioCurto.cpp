#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../acessorios-hpp/armas-de-ataque/PavioCurto.hpp"

PavioCurto::PavioCurto(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int PavioCurto::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string PavioCurto::gerarRuidoAtaque()
{
    return "BOOMZ BOOMZ";
}
