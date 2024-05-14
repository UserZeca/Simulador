#ifndef PAVIO_CURTO
#define PAVIO_CURTO

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class PavioCurto : public ArmaAtaque
{
    public:
        PavioCurto(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif