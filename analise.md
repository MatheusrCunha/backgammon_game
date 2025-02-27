# Análise orientada a objeto
> [!NOTE]
> <p>A <strong>análise</strong> orientada a objeto consiste na descrição do problema a ser tratado, duas primeiras etapas da tabela abaixo, a definição de casos de uso e a definição do domínio do problema.</p>

# Gamão

![Texto Alternativo](https://bkgm.com/rules/rulfig1.gif)
## Descrição Geral do domínio do problema

## 1.1 Objetivo

Este caso de uso descreve a lógica principal do jogo de Gamão, permitindo que dois jogadores movimentem suas peças de acordo com o resultado dos dados.

## 1.2 Requisitos

RF1: Jogar uma partida de gamão.

RF2: Realizar movimentação de peças com base nos dados rolados.

## 1.3 Atores

 Jogador 1: Um jogador que interage com o sistema.
    
 Jogador 2: O outro jogador que interage com o sistema.

## 1.4 Prioridade

 Alta

## 1.5 Pré-condições

 O jogo deve iniciar com todas as peças (15 para cada jogador) colocadas nas posições no tabuleiro.

## 1.6 Frequência de Uso

 Não se aplica.

## 1.7 Criticalidade

 Alta

## 1.8 Condição de Entrada

 Os jogo inicia quando os dados forem lançados.
    
## 1.9 Fluxo Principal

 O sistema exibe o tabuleiro de gamão com as peças dos jogadores nas suas posições.
 O Jogador 1 rola dois dados e escolhe como mover as peças

## 1.10 Fluxo Alternativo

  Caso um jogador tenha duas ou mais peças em uma posição específica do tabuleiro, ele pode bloquear o caminho do adversário, impedindo o movimento das peças inimigas por essa rota.

## 1.11 Pós-condições

  O jogo termina quando um dos jogadores remove todas as suas peças do tabuleiro.
  O sistema registra o vencedor da partida.

## 1.12 Regras de Negócio

  O jogador que tirar o maior valor nos dados começa o jogo
  
  Os jogadores devem mover as suas peças em sentidos opostos, um no sentido horário e outro no sentido anti-horário.
  
  Quando uma peça do jogador pára numa casa com apenas uma peça do adversário, esta é capturada e colocada na barra.
  
  Caso o jogador tire números duplos, ele pode mover quatro vezes (duas jogadas para cada dado).
  
  O jogador perde a vez se não conseguir fazer nenhum movimento válido. 
  
  Se um jogador tiver uma peça no meio, ele deve primeiro trazê-la de volta para o tabuleiro antes de fazer outros movimentos.
  
  A primeira pessoa que remover todas as 15 peças do tabuleiro ganha a partida.

## Diagrama de Casos de Uso

Apresentar o diagram de casos de uso, identificando as funcionalidades do sistema assim como os atores envolvidos

![Diagrama em branco](https://github.com/user-attachments/assets/41de3d98-998d-4c7f-9e5b-05d97777cf2e)

 
## Diagrama de Classe

Elaborar um diagrama de Classe

![image](https://github.com/user-attachments/assets/81988482-bb0b-4df8-acc8-44ee11c10503)


Diagrama de Sequência

Clique na peça:

1 - O Usuário clica na peça.

2 - O GameWindow recebe o evento de clique (mousePressEvent()) e verifica se uma peça foi selecionada.

3 -  A peça selecionada é armazenada em um estado interno no GameWindow.

Arrasta a peça:

1 - O Usuário arrasta a peça pela interface.

2 - O GameWindow lida com o evento mouseMoveEvent(), atualizando a posição da peça enquanto ela é movida.

3 - A Piece recebe a nova posição, sendo atualizada no tabuleiro.

Solta a peça:

1 - O Usuário solta a peça.

2 - O GameWindow trata o evento mouseReleaseEvent(), posicionando a peça na nova posição.

3 - A nova posição da peça é registrada e a peça se move no tabuleiro.

![diagrama de sequência](https://github.com/user-attachments/assets/4ab94fce-2754-41cd-95ac-cf11dfae96bf)


<div align="center">

[Retroceder](README.md) | [Avançar](projeto.md)

</div>
