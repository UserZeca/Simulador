#ifndef PAVIO_CURTO_HPP
#define PAVIO_CURTO_HPP

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class PavioCurto : public ArmaAtaque
{
    public:
        PavioCurto(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif