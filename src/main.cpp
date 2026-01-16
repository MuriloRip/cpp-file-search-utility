#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

/**
 * @brief Realiza uma busca recursiva por arquivos que contenham um texto específico.
 * @param path O diretório inicial para a busca.
 * @param search_term O termo a ser procurado dentro dos arquivos.
 */
void search_files_recursively(const fs::path& path, const std::string& search_term) {
    try {
        for (const auto& entry : fs::recursive_directory_iterator(path)) {
            if (entry.is_regular_file()) {
                std::ifstream file(entry.path());
                std::string line;
                int line_number = 0;
                bool found_in_file = false;

                while (std::getline(file, line)) {
                    line_number++;
                    if (line.find(search_term) != std::string::npos) {
                        if (!found_in_file) {
                            std::cout << "\n[ENCONTRADO] " << entry.path().string() << std::endl;
                            found_in_file = true;
                        }
                        std::cout << "  Linha " << line_number << ": " << line << std::endl;
                    }
                }
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Erro de sistema de arquivos: " << e.what() << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " <diretorio_inicial> <termo_de_busca>" << std::endl;
        return 1;
    }

    fs::path start_directory = argv[1];
    std::string search_term = argv[2];

    std::cout << "Iniciando busca por '" << search_term << "' em: " << start_directory.string() << std::endl;
    search_files_recursively(start_directory, search_term);
    std::cout << "\nBusca concluída." << std::endl;

    return 0;
}
