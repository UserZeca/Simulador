#ifndef LANCARCO_IRIS_HPP
#define LANCARCO_IRIS_HPP

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class LancarcoIris : public ArmaAtaque
{
    public:
        LancarcoIris(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif