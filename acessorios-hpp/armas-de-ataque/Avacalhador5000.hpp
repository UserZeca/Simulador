#ifndef AVACALHADOR5000
#define AVACALHADOR5000

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
class Avacalhador5000 : public ArmaAtaque
{
    public:
        Avacalhador5000(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif