#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/Escudo.hpp"

Escudo::Escudo(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Escudo::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Escudo::getResistencia() 
{
    return this->resistencia;
}