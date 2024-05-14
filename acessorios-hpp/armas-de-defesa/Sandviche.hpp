#ifndef SANDVICHE
#define SANDVICHE

#include "../../core-simulador-hpp/ArmaAtaque.hpp"
#include "../../core-simulador-hpp/ArmaDefesa.hpp"
class Sandviche : public ArmaDefesa
{
    public:
        Sandviche(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif