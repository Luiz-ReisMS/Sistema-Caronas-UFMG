#ifndef FILA_H
#define FILA_H

#include <vector>

using namespace std;

struct EntradaFila {                // struct que representa uma pessoa dentro da fila
    int         id_entrada;         // número associado à quantidade de entradas na fila
    int         id_usuario;         // número associado ao usuário
    int         id_carona;          // número associado à carona
    int         posicao;            // posição na fila

    EntradaFila(int id_entrada,     // construtor para preencher uma entrada na fila
                int id_usuario,
                int id_carona,
                int posicao);
};


class Fila {                        // TAD que representa a fila de espera de uma carona
public:

    explicit Fila(int id_carona);   // construtor que cria uma fila para uma carona

    ~Fila() = default;              // destrutor da classe Fila

    int  getIdCarona()  const;      // retorna o id da carona
    int  getTamanho()   const;      // retorna a quantidade de pessoas na fila
    bool estaVazia()    const;      // verifica se a fila está vazia

    int  getPosicao(int id_usuario)     const;  // retorna a posição do usuário na fila (-1 se ausente)
    bool contemUsuario(int id_usuario)  const;  // verifica se o usuário está na fila

    EntradaFila*  getProximo()      const;  // retorna ponteiro para o próximo da fila, nullptr se vazia
    vector<EntradaFila> getEntradas() const;  // retorna todas as entradas da fila

    bool          enfileirar(int id_usuario);  // adiciona o usuário ao final da fila
    bool          remover(int id_usuario);     // remove o usuário da fila
    EntradaFila*  promoverProximo();            // remove o primeiro da fila e o retorna, nullptr se vazia
    void          limpar();                    // esvazia a fila

private:

    int                   id_carona_;   // carona à qual esta fila pertence
    vector<EntradaFila>   entradas_;    // entradas ordenadas por posição
    int                   proximo_id_;  // contador para gerar IDs únicos de entrada

    void recalcularPosicoes();  // recalcula posições após inserção/remoção
};

#endif // FILA_H
