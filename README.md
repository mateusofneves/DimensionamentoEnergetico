# Dimensionamento Energético
 
Sistema para estimativa do consumo médio mensal de energia elétrica de uma residência, considerando os equipamentos elétricos utilizados, suas potências, quantidades e tempo médio diário de utilização.

# Integrantes

| Nome | RM |
|------------|------------|
| Mateus de Oliveira Fernandes Neves | RM572431 |
| Paulo Henrique Lira Bilac | RM569496 | 
| Pedro Soares de Souza | RM571285 | 
| Olavo Dadario Vianna Barreto | RM569272 |

# Funcionalidades

* Adicionar informações da residência (user)
* Adicionar equipamento (user)
* Informar potência do equipamento (user)
* Informar a quantidade de equipamentos (user)
* Remover residências (user / sistema)
* Gerar relatório (user / sistema)
* Gerar calculos (sistema)
* Sair (user)

# Product Backlog - Sistema de Dimensionamento Energético Residencial


# Product Backlog

| ID   | Utilizador (Épico) | User Story                                                                                                            |
| ---- | ------------------ | --------------------------------------------------------------------------------------------------------------------- |
| PB01 | Usuário            | Como usuário, quero me cadastrar no sistema para manter meus imóveis e análises salvos.                               |
| PB02 | Usuário            | Como usuário, quero acessar minha conta para consultar meus imóveis cadastrados.                                      |
| PB03 | Imóvel             | Como usuário, quero cadastrar um imóvel para realizar seu dimensionamento energético.                                 |
| PB04 | Imóvel             | Como usuário, quero editar ou excluir um imóvel cadastrado.                                                           |
| PB05 | Consumo            | Como usuário, quero informar o consumo mensal de energia do imóvel.                                                   |
| PB06 | Consumo            | Como usuário, quero cadastrar vários meses de consumo para representar melhor o perfil energético da residência.      |
| PB07 | Consumo            | Como usuário, quero consultar o histórico de consumo do imóvel.                                                       |
| PB08 | Dimensionamento    | Como usuário, quero que o sistema identifique automaticamente o maior consumo mensal registrado.                      |
| PB09 | Dimensionamento    | Como usuário, quero visualizar também o consumo médio mensal para contextualizar o pico de consumo.                   |
| PB10 | Dimensionamento    | Como usuário, quero saber em qual mês ocorreu o maior consumo.                                                        |
| PB11 | Resultado          | Como usuário, quero visualizar um resumo energético do imóvel.                                                        |
| PB12 | Resultado          | Como usuário, quero visualizar graficamente meu histórico de consumo.                                                 |
| PB13 | Validação          | Como usuário, quero ser alertado sobre dados de consumo inválidos ou incompletos antes de realizar o dimensionamento. |
| PB14 | Persistência       | Como usuário, quero que os dados permaneçam disponíveis após sair do sistema.                                         |
| PB15 | Segurança          | Como usuário, quero que os dados dos meus imóveis sejam privados.                                                     |
# Termos de aceite
| ID   | Termo de Aceite                                                                    |
| ---- | ---------------------------------------------------------------------------------- |
| PB01 | O usuário deve conseguir criar uma conta preenchendo os dados necessários.         |
| PB02 | O usuário deve conseguir realizar login e acessar seus imóveis cadastrados.        |
| PB03 | O usuário deve conseguir cadastrar um imóvel e visualizar seus dados.              |
| PB04 | O usuário deve conseguir editar ou excluir um imóvel cadastrado.                   |
| PB05 | O sistema deve permitir informar o consumo mensal em kWh.                          |
| PB06 | O usuário deve conseguir cadastrar o consumo de diferentes meses.                  |
| PB07 | O sistema deve apresentar o histórico de consumo do imóvel.                        |
| PB08 | O sistema deve identificar e apresentar o maior consumo registrado.                |
| PB09 | O sistema deve calcular e apresentar o consumo médio mensal.                       |
| PB10 | O sistema deve informar o mês em que ocorreu o maior consumo.                      |
| PB11 | O sistema deve apresentar um resumo com os principais dados energéticos do imóvel. |
| PB12 | O sistema deve gerar um gráfico utilizando o histórico de consumo.                 |
| PB13 | O sistema deve alertar o usuário quando houver dados inválidos ou incompletos.     |
| PB14 | Os dados cadastrados devem permanecer disponíveis após o usuário sair do sistema.  |
| PB15 | O usuário deve conseguir acessar somente os dados dos seus próprios imóveis.       |

# Prioridade 

| Prioridade | Funcionalidades                                                 |
| ---------- | --------------------------------------------------------------- |
| **Alta**   | Cadastro, login e gerenciamento dos imóveis.                    |
| **Alta**   | Cadastro dos equipamentos, potência, quantidade e tempo de uso. |
| **Alta**   | Cálculo do consumo estimado em kWh/mês.                         |
| **Alta**   | Apresentação do consumo médio e maior consumo.                  |
| **Média**  | Histórico e gráfico de consumo.                                 |
| **Média**  | Validação de dados incorretos ou incompletos.                   |
| **Baixa**  | Melhorias de visualização e recursos adicionais.                |

# Objetivo Final

O objetivo do sistema é fornecer de uma forma simples o consumo médio mensal de energia elétrica de uma residência, permitindo ao usuário visualizar quais equipamentos possuem maior participação no consumo e obter uma estimativa geral em kWh/mês.
