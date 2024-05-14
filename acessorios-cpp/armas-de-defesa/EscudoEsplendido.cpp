#include "../../core-simulador-hpp/ArmaDefesa.hpp"
#include "../../acessorios-hpp/armas-de-defesa/EscudoEsplendido.hpp"

EscudoEsplendido::EscudoEsplendido(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoEsplendido::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoEsplendido::getResistencia() 
{
    return this->resistencia;
}