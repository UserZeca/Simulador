#ifndef SCOUT
#define SCOUT
#include "../core-simulador-hpp/Personagem.hpp"
class Scout : public Personagem
{
    public:
        Scout(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif