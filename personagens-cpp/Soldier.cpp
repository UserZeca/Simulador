#include "../personagens-hpp/Soldier.hpp"

Soldier::Soldier(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Soldier::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Soldier::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Soldier::pegarDescricao() 
{
    return "I'm gonna lay you out!";
}