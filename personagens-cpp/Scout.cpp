#include "../personagens-hpp/Scout.hpp"

Scout::Scout(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Scout::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Scout::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Scout::pegarDescricao() 
{
    return "Eat my dust!";
}