#ifndef CHAVES_HPP
#define CHAVES_HPP
#include "../core-simulador-hpp/Personagem.hpp"
class Chaves : public Personagem
{
    public:
        Chaves(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif