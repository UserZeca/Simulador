#ifndef BARRA_DE_DALOKOHS
#define BARRA_DE_DALOKOHS

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class BarraDeDalokohs : public ArmaDefesa
{
    public:
        BarraDeDalokohs(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif