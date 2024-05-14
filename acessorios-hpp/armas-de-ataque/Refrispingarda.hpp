#ifndef REFRISPINGARDA
#define REFRISPINGARDA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class Refrispingarda : public ArmaAtaque
{
    public:
        Refrispingarda(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif