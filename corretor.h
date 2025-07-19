#ifndef CORRETOR_H
#define CORRETOR_H
#include <string>

struct Corretor {
    static int next_id;
    int id;
    std::string nome;
    std::string telefone;
    bool avaliador;
    double latitude;
    double longitude;

    Corretor(const std::string& nome, const std::string& telefone, bool avaliador, double lat, double lon);
};
#endif
