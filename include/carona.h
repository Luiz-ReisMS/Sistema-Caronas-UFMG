#ifndef CARONA_H
#define CARONA_H

#include <string>
#include <vector>

/*
Classe responsável por representar uma carona no sistema.

Ela armazena informações importantes como:
- origem
- destino
- horário
- quantidade de vagas disponíveis

Além disso, fornece métodos para consultar e modificar
essas informações de forma controlada.
*/

class Carona {
private:
    // Local de saída da carona
    std::string origem;

    // Destino final da carona
    std::string destino;

    // Horário programado para saída
    std::string horario;

    // Quantidade de vagas disponíveis no veículo
    int vagasDisponiveis;

public:

    /*
    Construtor da classe Carona.

    Responsável por inicializar os atributos da carona
    no momento em que ela é criada.
    */
    Carona(std::string origem,
           std::string destino,
           std::string horario,
           int vagas);

    /*
    Retorna a origem da carona.
    */
    std::string getOrigem();

    /*
    Retorna o destino da carona.
    */
    std::string getDestino();

    /*
    Retorna o horário da carona.
    */
    std::string getHorario();

    /*
    Retorna a quantidade atual de vagas disponíveis.
    */
    int getVagasDisponiveis();

    /*
    Reduz em 1 o número de vagas disponíveis.

    Deve ser utilizado quando um passageiro
    entrar na carona.
    */
    void reduzirVaga();

    /*
    Aumenta em 1 o número de vagas disponíveis.

    Deve ser utilizado quando um passageiro
    desistir da carona.
    */
    void aumentarVaga();

    /*
    Verifica se ainda existem vagas disponíveis.

    Retorna:
    - true -> se houver vagas
    - false -> se a carona estiver lotada
    */
    bool possuiVagas();
};

#endif
