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
| PB14 | Persistência | Como usuário, quero que os dados permaneçam disponíveis após sair do sistema. |
| PB15 | Segurança | Como usuário, quero que os dados dos meus imóveis sejam privados. |

# Termos de Aceite

*  O usuário deve conseguir **cadastrar e acessar sua conta**.
*  O usuário deve conseguir **cadastrar, editar e excluir imóveis**.
*  O usuário deve conseguir **informar os equipamentos, suas potências, quantidades e tempo de uso**.
*  O sistema deve **calcular o consumo estimado em kWh/mês**.
*  O sistema deve apresentar o **consumo médio e o maior consumo mensal**.
*  O usuário deve conseguir **visualizar o histórico e um gráfico de consumo**.
*  O sistema deve **validar dados incorretos ou incompletos**.
*  Os dados devem ser **salvos e protegidos para cada usuário**.

# Objetivo Final

O objetivo do sistema é fornecer de uma forma simples o consumo médio mensal de energia elétrica de uma residência, permitindo ao usuário visualizar quais equipamentos possuem maior participação no consumo e obter uma estimativa geral em kWh/mês.
