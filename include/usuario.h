#ifndef Usuario_H
#define Usuario_H
#include <iostream>
#include <string>

class Usuario{
    protected:
    int id;
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
    Usuario(int id, const std::string &nome, const std::string &email, const std::string &senha);
    int getId() const;

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
    virtual ~Usuario();
};

class Passageiro : public Usuario{
    //outras classes poderão precisar carregar ou alterar esse CSV
    public:
    Passageiro(int id, const std::string &nome, const std::string &email, const std::string &senha);
    //Salva usuário cadastrado em CSV próprio de passageiro
    void salvarCSV() override;
    //Carrega CSV próprio de passageiro
    void carregarCSV() override;
};

class Motorista : public Usuario{
    public:
    Motorista(int id, const std::string &nome, const std::string &email, const std::string &senha);
    //Salva usuário cadastrado em CSV próprio de motorista
    void salvarCSV() override;
    //Carrega CSV próprio de motorista
    void carregarCSV() override;
};


#endif