#ifndef TARJA_DE_INVESTIDA
#define TARJA_DE_INVESTIDA

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class TarjaDeInvestida : public ArmaDefesa
{
    public:
        TarjaDeInvestida(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif