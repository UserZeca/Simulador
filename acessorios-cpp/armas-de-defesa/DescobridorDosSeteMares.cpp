#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/DescobridordosSeteMares.hpp"

DescobridordosSeteMares::DescobridordosSeteMares(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string DescobridordosSeteMares::getDescricaoArma() 
{
    return this->descricaoArma;
}

int DescobridordosSeteMares::getResistencia() 
{
    return this->resistencia;
}