Estrutura do projeto:

├── bin
│   └── main
├── Makefile
├── README.MD
└── src
    ├── assets
    ├── core
    │   ├── Game.cpp
    │   ├── Game.hpp
    │   └── State.hpp
    ├── entities
    │   └── Entity.hpp
    ├── main.cpp
    ├── states
    │   ├── GameState.cpp
    │   ├── GameState.hpp
    │   ├── MenuState.cpp
    │   └── MenuState.hpp
    └── ui
        └── Button.hpp


Explicação do modelo:

- Na pasta "core" é onde fica os arquivos principais do template, sendo eles o State e o Game, respectivamente falando, é necesário para controlarmos as funções do projeto, como a handleEvent que é a função que vai ser chamada no loop de pollEvent, a update que passa o Delta Time (tempo entre o frame anterior e o atual) como parâmetro e serve para atualizar posições, lógica de física etc... por último a render que é a função que vai chamar após o window.clear, assim desenhando tudo na tela ( aqui vc coloca todos os window.draw(seu objeto drawable)); O game é a classe que vai ter o loop principal do jogo, e também onde será alterado os estados (ou telas, chame como quiser), por exemplo: trocar do estado menu para estado game, do estado game para o game over, etc...

- Na pasta States State ficam as classes que vão implementar a classe State que criamos em core, lá vamos definir seu handleEvent, update e render. Podemos aqui criar lógicas para alterar a cena etc