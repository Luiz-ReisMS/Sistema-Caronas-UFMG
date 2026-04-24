# SISTEMA DE CARONAS INTELIGENTE - UFMG  
**Disciplina:** Programação e Desenvolvimento de Software II (PDS2) - 2026.1  
**Tema:** Sistema centralizado de apoio à mobilidade acadêmica para alunos oferecerem e solicitarem caronas.  
**Autores:** Arthur Canhestro Lara Saraiva, Saulo Freitas, Livia Torres, joao Andrade
  
## Escopo   
Este é um sistema que centraliza a oferta e demanda de caronas por parte de alunos da Universidade Federal de Minas Gerais para atender as necessidades mobilizacionais para localidades diversas. As funcionalidades iniciais vão além de uma simples listagem de vagas e otimizam a distribuição e divulgação dos lugares em veículos de motoristas cadastrados, que podem aceitar ou não solicitações de usuários passageiros. Caso o veículo esteja sem espaço, uma fila pode ser organizada para se preencher possíveis desistências após o aval dos envolvidos na operação.
...

Outros recursos serão adicionados a medida que se mostrem necessários para a melhor experiência dos usuários.
*

#  Funcionalidades 

## 1 Cadastro e Autenticação
O sistema deve permitir o gerenciamento de acesso dos usuários.

- Cadastro de usuários (motoristas e passageiros)
- Login e autenticação no sistema
- Diferenciação de perfis (motorista e passageiro)

---

## 2 Oferta de Caronas
O sistema deve permitir que motoristas ofereçam caronas.

- Cadastro de nova carona com as seguintes informações:
  - Origem
  - Rota
  - Destino
  - Horário
  - Número de vagas disponíveis
- Edição de caronas cadastradas
- Cancelamento de caronas

---

## 3 Solicitação de Caronas
O sistema deve permitir que passageiros encontrem e solicitem caronas.

- Busca por caronas disponíveis
- Solicitação de participação em uma carona
- Visualização do status da solicitação:
  - Pendente
  - Aceita
  - Recusada

---

## 4 Gerenciamento de Solicitações
O sistema deve permitir que motoristas gerenciem solicitações recebidas.

- Aceitar solicitações de passageiros
- Recusar solicitações
- Visualizar lista de passageiros confirmados

---

## 5 Sistema de Fila 
O sistema deve gerenciar situações em que não há vagas disponíveis.

- Entrada automática ou manual em fila de espera quando a carona estiver lotada
- Organização da fila por ordem de solicitação
- Promoção automática do próximo usuário em caso de desistência
- Notificação do usuário quando uma vaga for liberada

---

## 6 Notificações
O sistema deve manter os usuários informados sobre eventos relevantes.

- Notificação de solicitação aceita ou recusada
- Notificação de liberação de vaga na fila
- Notificação de cancelamento de carona

## 7 Avaliações

O sistema deve permitir que os usuários avaliem as caronas e relatem comportamentos inadequados.

- Sistema de avaliação por notas (ex: 1 a 5 estrelas) para motoristas e passageiros
  - Possibilidade de registrar comentários opcionais sobre a experiência
  - Cálculo de média de avaliações por usuário
  - Visualização da reputação de motoristas e passageiros
- Denúncia de usuários por má conduta
  - Seleção do motivo da denúncia
  - Registro de descrição do ocorrido
  -Encaminhamento para análise (moderação do sistema)


