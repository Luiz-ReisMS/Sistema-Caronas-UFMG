#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>

#include "usuario.h"
#include "carona.h"
#include "fila.h"
#include "solicitacao.h"

/**
 * @class Sistema
 * @brief Classe principal que gerencia a lógica de funcionamento do sistema de caronas.
 * * Armazena as listas de usuários, caronas, filas e solicitações, e controla as interações
 * (ex: um usuário solicitando uma carona entra na fila de espera daquela carona).
 */
class Sistema {
private:
    /** * @brief Lista de ponteiros para usuários. 
     * Armazena tanto passageiros quanto motoristas (polimorfismo com os ponteiros).
     */
    std::vector<usuario*> usuarios_;       

    /** @brief Lista de caronas cadastradas (e ativas) no sistema. */
    std::vector<Carona> caronas_;          

    /** @brief Lista de filas de espera, cada uma associada a uma carona. */
    std::vector<Fila> filas_;              

    /** @brief Lista do histórico de solicitações feitas. */
    std::vector<Solicitacao> solicitacoes_;

public:
    /**
     * @brief Construtor da classe Sistema.
     */
    Sistema();

    /**
     * @brief Destrutor da classe Sistema.
     * Libera a memória alocada dinamicamente para os ponteiros de usuários.
     */
    ~Sistema();

    /**
     * @brief Cadastra um novo usuário no sistema e o adiciona à lista de usuários.
     * * @param nome Nome completo do usuário.
     * @param email E-mail para login.
     * @param senha Senha de acesso.
     * @param isMotorista True se for criar um motorista, false para passageiro.
     * @return true se o cadastro for bem-sucedido, false se o e-mail já existir.
     */
    bool cadastrarUsuario(const std::string& nome, const std::string& email, const std::string& senha, bool isMotorista);

    /**
     * @brief Autentica um usuário existente.
     * * @param email E-mail do usuário.
     * @param senha Senha do usuário.
     * @return Ponteiro para o usuário que efetuou o login (*usuario), ou nullptr se o email ou a senha forem inválidos.
     */
    usuario* realizarLogin(const std::string& email, const std::string& senha);

    /**
     * @brief Motorista cria uma nova carona.
     * * @param origem Local de saída.
     * @param destino Destino.
     * @param horario Horário de saída (previsto/planejado).
     * @param vagas Quantidade de vagas disponíveis.
     * @return Identificador (ID em int) da carona criada.
     */
    int criarCarona(const std::string& origem, const std::string& destino, const std::string& horario, int vagas);

    /**
     * @brief Passageiro solicita entrada em uma carona específica.
     * * @param idPassageiro Identificador (ID) do passageiro.
     * @param idCarona Identificador (ID) da carona desejada.
     * @return true se a solicitação foi registrada e o usuário entrou na fila.
     */
    bool solicitarCarona(int idPassageiro, int idCarona);

    /**
     * @brief Processa a fila de espera de uma carona.
     * * Remove o próximo passageiro da fila, atualiza o status da solicitação dele e reduz uma vaga na carona.
     * * @param idCarona Identificador (ID) da carona.
     * @return true se um passageiro foi aceito, false se a fila estiver vazia ou não houver vagas.
     */
    bool aprovarProximoDaFila(int idCarona);

    /**
     * @brief Imprime a lista de todas as caronas que ainda possuem vagas.
     */
    void listarCaronasDisponiveis() const;
};

#endif // SISTEMA_H