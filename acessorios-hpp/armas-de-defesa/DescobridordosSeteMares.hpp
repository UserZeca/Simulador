#ifndef DESCOBRIDOR_DOS_SETE_MARES
#define DESCOBRIDOR_DOS_SETE_MARES

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class DescobridordosSeteMares : public ArmaDefesa
{
    public:
        DescobridordosSeteMares(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif