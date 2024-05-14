#include "../personagens-hpp/Demoman.hpp"

Demoman::Demoman(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Demoman::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Demoman::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Demoman::pegarDescricao() 
{
    return "I'm gonna blow ya to the moon!";
}