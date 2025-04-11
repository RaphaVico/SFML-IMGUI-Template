# MeuProjeto

Projeto em C++ que utiliza as bibliotecas **SFML**, **Dear ImGui** e **ImGui-SFML**, gerenciado via **CMake** com `FetchContent` para gerenciamento automático de dependências.

## 📦 Dependências

Este projeto faz uso de:

- [SFML 3.0.0](https://github.com/SFML/SFML) – Interface multimídia simples para gráficos, janelas e sistema.
- [Dear ImGui 1.91.9b](https://github.com/ocornut/imgui) – Biblioteca de GUI para C++ com foco em ferramentas e debug.
- [ImGui-SFML v3.0](https://github.com/SFML/imgui-sfml) – Wrapper para integrar ImGui com SFML.

## 🔧 Pré-requisitos

- CMake >= 3.14
- Compilador C++17 ou superior
- Git

## 🛠️ Como compilar

Clone este repositório:

```bash
git https://github.com/RaphaVico/SFML-IMGUI-Template.git
cd SFML-IMGUI-Template
```

Crie uma pasta de build e compile:

```bash
mkdir build
cd build
cmake .. -A x64 -DCMAKE_POLICY_VERSION_MINIMUM="3.5"
cmake --build .
```

## ▶️ Como executar

Após a compilação, o executável estará disponível dentro da pasta `build`. Para executá-lo:

```bash
./main
```

## 📁 Estrutura do Projeto

```
SFML-IMGUI-Template/
│
├── src/
│   └── main.cpp
├── CMakeLists.txt
└── README.md
```

## ⚙️ Detalhes Técnicos

O `CMakeLists.txt` está configurado para:

- Desabilitar os módulos `audio` e `network` da SFML para reduzir dependências.
- Ativar a demo padrão do ImGui com `IMGUI_SFML_IMGUI_DEMO`.
- Usar `FetchContent` para baixar e construir as bibliotecas automaticamente.

## 🧪 Testado com

- GCC 13 / Clang 16
- CMake 3.28
- SFML 3.0.0
- ImGui 1.91.9b
- ImGui-SFML v3.0

