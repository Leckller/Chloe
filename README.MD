# 🎮 Game Template (SFML + C++)

## 📁 Estrutura do Projeto

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

---

## 🧠 Explicação do Modelo

### 📦 Pasta `core/`

Na pasta `core` ficam os arquivos principais do template: `Game` e `State`.

A classe `State` define as funções base que serão utilizadas pelos estados do jogo:

- `handleEvent` → chamada dentro do loop de eventos (`pollEvent`), responsável por tratar entradas do usuário
- `update` → recebe o delta time (tempo entre o frame anterior e o atual) e é usada para atualizar lógica do jogo, como movimentação e cálculos
- `render` → chamada após o `window.clear`, responsável por desenhar os elementos na tela (`window.draw(...)`)

A classe `Game` é responsável por:

- Executar o loop principal do jogo
- Processar eventos
- Atualizar o estado atual
- Renderizar o estado atual
- Gerenciar a troca de estados (ou telas)

Exemplos de troca de estado:

- Menu → Game  
- Game → Game Over  

---

### 🎮 Pasta `states/`

Na pasta `states` ficam as classes que implementam a classe `State`.

Cada estado representa uma tela do jogo, como:

- `MenuState`
- `GameState`

Nessas classes são implementadas as funções:

- `handleEvent`
- `update`
- `render`

Além disso, cada estado pode conter suas próprias lógicas, como controle de fluxo e mudanças de cena.

---