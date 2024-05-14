#include "../personagens-hpp/Pyro.hpp"

Pyro::Pyro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pyro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pyro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pyro::pegarDescricao() 
{
    return "Mmph mph mph!";
}