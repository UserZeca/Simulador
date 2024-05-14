#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/TarjaDeInvestida.hpp"

TarjaDeInvestida::TarjaDeInvestida(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string TarjaDeInvestida::getDescricaoArma() 
{
    return this->descricaoArma;
}

int TarjaDeInvestida::getResistencia() 
{
    return this->resistencia;
}