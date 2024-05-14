#ifndef LANCARCO_IRIS
#define LANCARCO_IRIS

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class LancarcoIris : public ArmaAtaque
{
    public:
        LancarcoIris(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif