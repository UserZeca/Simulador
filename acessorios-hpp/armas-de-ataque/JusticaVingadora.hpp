#ifndef JUSTICA_VINGADORA_HPP
#define JUSTICA_VINGADORA_HPP

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class JusticaVingadora : public ArmaAtaque
{
    public:
        JusticaVingadora(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif