#ifndef PYRO
#define PYRO
#include "../core-simulador-hpp/Personagem.hpp"
class Pyro : public Personagem
{
    public:
        Pyro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif