# File Search Utility (C++17)

Este projeto é um utilitário de linha de comando desenvolvido em **C++17** que demonstra o domínio de conceitos avançados da linguagem, como manipulação de sistema de arquivos (`std::filesystem`) e otimização de performance.

## 🚀 Funcionalidade Principal

O programa realiza uma **busca recursiva** em um diretório especificado, procurando por um termo de texto dentro de todos os arquivos encontrados.

## 🛠️ Tecnologias Utilizadas

*   **C++17**: Linguagem principal.
*   **CMake**: Sistema de build e gerenciamento de projeto.
*   **`std::filesystem`**: Para navegação eficiente no sistema de arquivos.

## ⚙️ Como Compilar e Executar

### Pré-requisitos
*   Um compilador C++ moderno (suporte a C++17, como GCC ou Clang).
*   CMake (versão 3.10 ou superior).

### Passos
1.  **Crie o diretório de build e execute o CMake:**
    ```bash
    mkdir build
    cd build
    cmake ..
    ```
2.  **Compile o projeto:**
    ```bash
    cmake --build .
    ```
3.  **Execute o utilitário:**
    ```bash
    # Uso: ./file_search_utility <diretorio_inicial> <termo_de_busca>
    ./file_search_utility /home/usuario/projetos "class MyClass"
    ```

## 📂 Estrutura do Projeto

*   `CMakeLists.txt`: Configuração do build.
*   `src/main.cpp`: Lógica principal do programa.

---
Desenvolvido por [MuriloRip](https://github.com/MuriloRip) para demonstrar proficiência em C++ de alto desempenho.
