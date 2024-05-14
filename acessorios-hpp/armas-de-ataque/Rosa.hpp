#ifndef ROSA_HPP
#define ROSA_HPP

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class Rosa : public ArmaAtaque
{
    public:
        Rosa(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif