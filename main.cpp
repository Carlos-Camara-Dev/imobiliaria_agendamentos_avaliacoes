#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "corretor.h"
#include "cliente.h"
#include "imovel.h"
#include "agendamento.h"
#include "utils.h"

void ler_corretores(int n, std::vector<Corretor>& corretores) {
    for (int i = 0; i < n; ++i) {
        std::string telefone, nome;
        int eh_avaliador_int;
        double lat, lon;
        std::cin >> telefone >> eh_avaliador_int >> lat >> lon;
        std::getline(std::cin >> std::ws, nome);
        bool eh_avaliador_bool = (eh_avaliador_int == 1);
        corretores.emplace_back(nome, telefone, eh_avaliador_bool, lat, lon);
    }
}
void ler_clientes(int n, std::vector<Cliente>& clientes) {
    for (int i = 0; i < n; ++i) {
        std::string telefone, nome;
        std::cin >> telefone;
        std::getline(std::cin >> std::ws, nome);
        clientes.emplace_back(nome, telefone);
    }
}
void ler_imoveis(int n, std::vector<Imovel>& imoveis) {
    for (int i = 0; i < n; ++i) {
        std::string tipo_str, endereco;
        int prop_id;
        double lat, lon, preco;
        std::cin >> tipo_str >> prop_id >> lat >> lon >> preco;
        std::getline(std::cin >> std::ws, endereco);
        try {
            Tipo_imovel tipo = string_to_tipo_imovel(tipo_str);
            imoveis.emplace_back(tipo, prop_id, lat, lon, preco, endereco);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Ignorando linha de imóvel com tipo inválido: " << tipo_str << std::endl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<Corretor> corretores;
    std::vector<Cliente> clientes;
    std::vector<Imovel> imoveis;
    int num_corretores, num_clientes, num_imoveis;

    std::cin >> num_corretores;
    ler_corretores(num_corretores, corretores);
    std::cin >> num_clientes;
    ler_clientes(num_clientes, clientes);
    std::cin >> num_imoveis;
    ler_imoveis(num_imoveis, imoveis);
    Agendamento agendamento;
    agendamento.gerar_agenda(corretores, imoveis);

    // Saída
    agendamento.imprimir_agenda();

    return 0;
}
