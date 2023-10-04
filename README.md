# Jogo da Velha em Linguagem C

Este é um projeto de um jogo da velha desenvolvido em linguagem C com o suporte da ferramenta ChatGPT da OpenAI. O objetivo deste projeto é criar um jogo simples e interativo de Jogo da Velha que pode ser jogado no console.

## Como Jogar

1. Abra um ambiente de desenvolvimento C (por exemplo, Visual Studio Code) e compile o código-fonte do jogo.

2. Execute o jogo.

3. O jogo será iniciado e exibirá um tabuleiro vazio do Jogo da Velha no console.

4. Dois jogadores, representados como 'X' e 'O', se revezarão para fazer suas jogadas.

5. O jogador atual será solicitado a inserir a linha (0, 1 ou 2) e a coluna (0, 1 ou 2) onde deseja colocar seu símbolo ('X' ou 'O').

6. O jogo verificará se a jogada é válida e atualizará o tabuleiro.

7. O jogo continuará até que haja um vencedor ou ocorra um empate.

8. O vencedor será anunciado, ou um empate será declarado.

## Requisitos

- Compilador C (por exemplo, GCC)
- Ambiente de desenvolvimento C (por exemplo, Visual Studio Code)

## Como Compilar e Executar

1. Abra o código-fonte do jogo em seu ambiente de desenvolvimento.

2. Compile o código-fonte usando o compilador C. Por exemplo, no terminal (no caso do GCC):

   ```bash
   gcc -o jogo_da_velha jogo_da_velha.c

3. Execute o jogo:

    ```bash
    ./jogo_da_velha

# Exemplo de uso

Jogo da Velha

   |   |
-----------
   |   |
-----------
   |   |

Jogador X, informe a linha (0, 1 ou 2) e a coluna (0, 1 ou 2): 1 1

   |   |
-----------
   | X |
-----------
   |   |

Jogador O, informe a linha (0, 1 ou 2) e a coluna (0, 1 ou 2): 0 0

 O |   |
-----------
   | X |
-----------
   |   |

...

Jogador X venceu!

# Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir problemas (issues) e solicitar melhorias (pull requests).