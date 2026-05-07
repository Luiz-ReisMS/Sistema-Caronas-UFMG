# Requisitos e Modelagem

Este documento descreve os requisitos funcionais e não funcionais do sistema de caronas e a modelagem inicial através de Cartões CRC.

---

## Requisitos (User Stories)

### Usuário
- Como usuário, quero me cadastrar no sistema para acessar as funcionalidades.
- Como usuário, quero fazer login para acessar minha conta.

### Motorista
- Como motorista, quero cadastrar uma carona para oferecer vagas.
- Como motorista, quero editar ou cancelar uma carona.
- Como motorista, quero aceitar ou recusar solicitações.

### Passageiro
- Como passageiro, quero buscar caronas disponíveis.
- Como passageiro, quero solicitar participação em uma carona.
- Como passageiro, quero listar todas as caronas com vagas disponíveis para escolher a que melhor atende minha rota para a UFMG.
- Como passageiro, quero entrar em uma fila de espera quando não houver vagas.

### Sistema
- Como sistema, quero organizar uma fila de espera.
- Como sistema, quero atualizar vagas automaticamente.
  

## Requisitos Não Funcionais
- O sistema deve ser desenvolvido obrigatoriamente na linguagem C++.
- O sistema deve utilizar a arquitetura de orientação a objetos, com separação clara de interfaces (`.h`) e implementações (`.cpp`).
- As senhas dos usuários devem passar por um processo de criptografia (`encrypt()`) antes do armazenamento.

---

## Cartões CRC (Classe, Responsabilidade, Colaborador)

## Relações entre Classes

- passageiro herda de usuario
- motorista herda de usuario
- Sistema atua como controlador principal
- Fila está associada a uma Carona
- Solicitacao conecta Passageiro e Carona

## Classe: Sistema

| Responsabilidades | Colaboradores |
|---|---|
| Gerenciar usuários do sistema | Usuario |
| Gerenciar caronas | Carona |
| Gerenciar filas de espera | Fila |
| Registrar solicitações | Solicitacao |
| Realizar login de usuários | Usuario |
| Aprovar passageiros da fila | Fila, Carona, Solicitacao |

---

## Classe: usuario

| Responsabilidades | Colaboradores |
|---|---|
| Armazenar dados do usuário | — |
| Validar e criptografar senha | — |
| Realizar cadastro, login e logout | — |
| Salvar dados em CSV | — |
| Carregar dados em CSV | — |

---

## Classe: passageiro

| Responsabilidades | Colaboradores |
|---|---|
| Salvar dados do passageiro | — |
| Carregar dados do passageiro | — |

---

## Classe: motorista

| Responsabilidades | Colaboradores |
|---|---|
| Salvar dados do motorista | — |
| Carregar dados do motorista | — |

---

## Classe: Carona

| Responsabilidades | Colaboradores |
|---|---|
| Armazenar origem e destino | — |
| Armazenar horário | — |
| Controlar vagas disponíveis | — |
| Verificar disponibilidade de vagas | — |
| Reduzir vagas disponíveis | — |
| Aumentar vagas disponíveis | — |

---

## Classe: Fila

| Responsabilidades | Colaboradores |
|---|---|
| Gerenciar fila de espera | EntradaFila |
| Adicionar usuários na fila | EntradaFila |
| Remover usuários da fila | EntradaFila |
| Retornar próximo usuário da fila | EntradaFila |
| Reorganizar posições da fila | EntradaFila |

---

## Struct: EntradaFila

| Responsabilidades | Colaboradores |
|---|---|
| Representar uma entrada na fila | — |
| Armazenar posição do usuário | — |
| Armazenar id do usuário e da carona | — |

---

## Classe: Solicitacao

| Responsabilidades | Colaboradores |
|---|---|
| Registrar pedido de carona | — |
| Armazenar status da solicitação | — |
| Informar passageiro associado | — |
| Informar carona associada | — |
| Atualizar status da solicitação | — |

---
