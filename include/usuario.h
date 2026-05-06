#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

class usuario{
    protected:
    std::string nome;
    std::string email;
    std::string senha;

    //verifica se o email inserido está cadastrado
    bool emailexistente() const;
    //verifica se a senha atende as condições de existência
    bool validasenha() const;
    //encripta a senha
    void encrypt();

    public:
    //Construtor que inicializa com variaveis adquiridas em cadastro() ou login()
    usuario(const std::string &nome, const std::string &email, const std::string &senha);

    //Lê um nome e senha e registra pela primeira vez
    void virtual cadastro();
    //Lê um nome e senha e entra na conta relacionada
    void virtual login();
    //Sai da conta já existente
    void virtual logout();
    //exclui conta
    virtual void apagarconta();

    virtual void salvarCSV();
    virtual void carregarCSV();
    virtual ~usuario();
};

class passageiro : public usuario{
    //outras classes poderão precisar carregar ou alterar esse CSV
    public:
    passageiro(const std::string &nome, const std::string &email, const std::string &senha);
    //Salva usuário cadastrado em CSV próprio de passageiro
    void salvarCSV() override;
    //Carrega CSV próprio de passageiro
    void carregarCSV() override;
};

class motorista : public usuario{
    public:
    motorista(const std::string &nome, const std::string &email, const std::string &senha);
    //Salva usuário cadastrado em CSV próprio de motorista
    void salvarCSV() override;
    //Carrega CSV próprio de motorista
    void carregarCSV() override;
};


#endif