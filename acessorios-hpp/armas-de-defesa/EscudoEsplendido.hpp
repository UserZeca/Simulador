#ifndef ESCUDO_ESPLENDIDO
#define ESCUDO_ESPLENDIDO

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoEsplendido : public ArmaDefesa
{
    public:
        EscudoEsplendido(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif