#ifndef SOLICITACAO_H
#define SOLICITACAO_H

class Solicitacao {
private:
    int _idPassageiro;
    int _idCarona;
    int _status; // definir quais valores inteiros significam cada coisa

public:
    // Construtor: pega as identificações do passageiro da carona "cria a carona"
    Solicitacao(int idPassageiro, int idCarona); 

    /* Getters: vão ser utilizados para passar valores às outras funções que precisarem
        Implementação do tipo:
        int solicitacao::getstatus{
        return _status;}

        eles vao apenas retornar os valores que 
    */
    int getStatus() const;          //status da corrida para visualizar se ela está aceita
    int getIdPassageiro() const;    //id do passageiro
    int getIdCarona() const;        //id da carona

    // Setter: vai ser utilizado para mudar o status da carona 
    void setStatus(int novoStatus);
};

#endif
