#ifndef HEAVY
#define HEAVY
#include "../core-simulador-hpp/Personagem.hpp"
class Heavy : public Personagem
{
    public:
        Heavy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif