#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

struct Cliente {
    static int next_id; 
    int id;
    std::string nome;
    std::string telefone;

    Cliente(const std::string& nome, const std::string& telefone);
};
#endif
