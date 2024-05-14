#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/BarraDeDalokohs.hpp"

BarraDeDalokohs::BarraDeDalokohs(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string BarraDeDalokohs::getDescricaoArma() 
{
    return this->descricaoArma;
}

int BarraDeDalokohs::getResistencia() 
{
    return this->resistencia;
}