#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/Sandviche.hpp"

Sandviche::Sandviche(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Sandviche::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Sandviche::getResistencia() 
{
    return this->resistencia;
}