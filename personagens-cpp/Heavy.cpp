#include "../personagens-hpp/Heavy.hpp"

Heavy::Heavy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Heavy::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Heavy::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Heavy::pegarDescricao() 
{
    return "I am Heavy Weapons Guy... and this is my weapon.";
}