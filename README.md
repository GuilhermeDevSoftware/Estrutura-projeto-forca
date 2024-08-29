# Jogo da Adivinhação em C++

Este é um projeto de jogo de adivinhação de palavras, desenvolvido em C++, que visa demonstrar boas práticas de programação e performance. O jogo escolhe uma palavra secreta e o jogador deve adivinhar essa palavra uma letra por vez. O jogador pode errar até 5 vezes antes de perder o jogo.

## Funcionalidades

- **Escolha Aleatória da Palavra:** O jogo seleciona aleatoriamente uma palavra secreta de um banco de dados.
- **Verificação de Chutes:** O jogo verifica se a letra chutada pelo jogador está na palavra secreta.
- **Contagem de Erros:** O jogador pode errar até 5 vezes antes de perder o jogo.
- **Adição de Novas Palavras:** Após vencer o jogo, o jogador pode optar por adicionar uma nova palavra ao banco de palavras.
- **Interface Simples e Intuitiva:** O jogo é jogado diretamente no console, com uma interface simples e fácil de usar.

## Estrutura do Código

O código foi organizado em múltiplos arquivos para seguir boas práticas de modularização e manutenção de código. As principais funcionalidades estão divididas em funções específicas:

- `imprime_cabecalho`: Exibe o cabeçalho do jogo.
- `sorteia_palavra`: Seleciona a palavra secreta aleatoriamente.
- `imprime_palavra`: Exibe a palavra secreta com as letras já acertadas e sublinhados para as letras não reveladas.
- `chuta`: Captura o chute do jogador e verifica se está correto.
- `imprime_erros`: Exibe as letras que o jogador já tentou e não fazem parte da palavra secreta.
- `nao_acertou` e `nao_enforcou`: Verificam as condições de vitória ou derrota.
- `adiciona_palavra`: Permite ao jogador adicionar uma nova palavra ao banco de palavras.

## Como Jogar

1. O jogo exibe uma palavra secreta parcialmente oculta.
2. O jogador deve adivinhar as letras que compõem a palavra.
3. Cada letra incorreta conta como um erro. Após 5 erros, o jogo termina e o jogador perde.
4. Se o jogador adivinhar todas as letras corretamente, ele ganha.
5. Após vencer, o jogador tem a opção de adicionar uma nova palavra ao banco de dados.

## Requisitos

- **Compilador C++**: O projeto foi desenvolvido e testado com o Visual Studio, mas pode ser compilado com qualquer compilador C++ moderno.
- **C++11 ou superior**: O código utiliza recursos da versão C++11.
