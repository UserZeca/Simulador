#ifndef AVACALHADOR5000_HPP
#define AVACALHADOR5000_HPP

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class Avacalhador5000 : public ArmaAtaque
{
    public:
        Avacalhador5000(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif