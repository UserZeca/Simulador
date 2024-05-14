#ifndef DESCOBRIDOR_DOS_SETE_MARES_HPP
#define DESCOBRIDOR_DOS_SETE_MARES_HPP

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