#ifndef DEMOMAN
#define DEMOMAN
#include "../core-simulador-hpp/Personagem.hpp"
class Demoman : public Personagem
{
    public:
        Demoman(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif