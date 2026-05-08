#ifndef SOLICITACAO_H
#define SOLICITACAO_H

enum class StatusSolicitacao {
    Pendente,
    Aceita,
    Recusada
};

class Solicitacao {
private:
    int _idPassageiro;
    int _idCarona;
    StatusSolicitacao status_;

public:
    // Construtor: pega as identificações do passageiro da carona "cria a carona"
    Solicitacao(int idPassageiro, int idCarona); 

    int getStatus() const;          //status da corrida para visualizar se ela está aceita
    int getIdPassageiro() const;    //id do passageiro
    int getIdCarona() const;        //id da carona

    // Setter: vai ser utilizado para mudar o status da carona 
    void setStatus(int novoStatus);
};

#endif
