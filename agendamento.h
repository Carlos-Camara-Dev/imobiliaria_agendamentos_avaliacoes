#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H
#include <vector>
#include <map>
#include "corretor.h"
#include "imovel.h"

struct Visita {
    int imovelId;
    int hora;
    int minuto;
};

class Agendamento {
public:
    std::map<int, std::vector<Visita>> agenda_final;
    void gerar_agenda(const std::vector<Corretor>& corretores, std::vector<Imovel>& imoveis);
    void imprimirAgenda();
};
#endif 
