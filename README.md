# 🎮 SENAI Uberlândia - Exercício de Matrizes 🧮

> *"Entender matrizes é como dominar um mapa de jogo: cada coordenada tem um papel no tabuleiro da programação!"*

---

## 📘 Descrição do Exercício

Neste desafio, vamos explorar a manipulação de **matrizes bidimensionais** (também chamadas de arrays 2D). Essa é uma habilidade fundamental para trabalhar com **mapas de jogos, tabuleiros, grids de tiles**, sistemas de navegação e até posicionamento de inimigos e obstáculos em engines de jogos.

---

## 🧩 Objetivo

Construir um programa em **pseudocódigo (Portugol)** ou em **linguagem C**, que:

1. **Crie uma matriz 5x5** preenchida com números inteiros aleatórios entre 1 e 99.
2. Mostre essa matriz formatada como um tabuleiro.
3. Calcule e exiba:
   - A soma de todos os elementos;
   - O maior e o menor valor da matriz;
   - A soma dos elementos da diagonal principal.

---

## 💡 Contextualização para Jogos

Imagine que essa matriz representa o **mini-mapa de um jogo tático**. Cada número pode simbolizar:
- Um tipo de terreno (floresta, montanha, água);
- A pontuação de um loot escondido;
- O poder de ataque de uma área inimiga;
- Ou simplesmente a “resistência” de blocos destrutíveis em uma dungeon.

Manipular essas informações em forma de **matriz** é o que torna possível o funcionamento de vários jogos que você conhece.

---

## 🛠️ Ferramentas Sugeridas

- [Codeblocks]([https://portugol.dev](https://www.codeblocks.org/))
- Compilador C (CodeBlocks, Dev-C++, Replit, etc.)
- GitHub (para versionamento do exercício)
- Google Classroom (para entrega)

---

## 📋 Exemplo de Saída

Matriz gerada:

[ 12 ][ 45 ][ 67 ][ 23 ][ 56 ]
[ 34 ][ 5 ][ 78 ][ 32 ][ 10 ]
[ 90 ][ 11 ][ 9 ][ 14 ][ 88 ]
[ 44 ][ 55 ][ 13 ][ 67 ][ 72 ]
[ 31 ][ 80 ][ 21 ][ 65 ][ 99 ]

Soma total: 1441
Maior valor: 99
Menor valor: 5
Soma da diagonal principal: 12 + 5 + 9 + 67 + 99 = 192


---

## 🧠 Dicas para Resolver

- Use dois **loops aninhados** para percorrer a matriz.
- Crie variáveis auxiliares para somar, comparar e armazenar valores.
- Use a lógica de `i == j` para encontrar elementos da diagonal principal.
- Faça testes com matrizes menores (como 3x3) antes de escalar para 5x5.

---

## 🎯 Desafios Extras (nível bônus!)

Se quiser ir além e ganhar pontos com o mestre da lógica, tente:

- Criar uma **função** para cada operação (soma total, maior valor, etc.);
- Criar uma matriz **8x8** que simula um tabuleiro de xadrez;
- Marcar um **"player"** aleatório na matriz com o valor `0` e mostrar sua posição;
- Calcular a soma da **diagonal secundária** também.

---

## 📦 Estrutura de Entrega

Por favor, entregue os seguintes itens em um único repositório ou pasta:

📁 exercicio-matrizes/
├── 📄 README.md (este arquivo)
├── 📄 matriz.por (ou .c, dependendo da linguagem)
└── 📸 print_tela.png (opcional - print da execução)


---

## 🤝 Créditos

Desenvolvido para a Unidade Curricular **Lógica de Programação** do curso **Programador de Jogos Digitais** – SENAI Uberlândia.

Instrutor: Felipe Rodrigues
Turma: PJD-02-N-25
Versão do exercício: 1.0

---

> “Se você entende como se move em uma matriz, você entende como andar em qualquer mapa de jogo.” – *Alguém*

---
