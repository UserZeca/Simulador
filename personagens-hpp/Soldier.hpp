#ifndef SOLDIER
#define SOLDIER
#include "../core-simulador-hpp/Personagem.hpp"
class Soldier : public Personagem
{
    public:
        Soldier(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
