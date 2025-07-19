#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "utils.h"

struct Imovel {
    static int next_id; 
    int id;
    Tipo_imovel tipo;
    int proprietario_id;
    double latitude;
    double longitude;
    double preco;
    std::string endereco;
    bool visitado; 
    Imovel(Tipo_imovel tipo, int prop_id, double lat, double lon, double preco, const std::string& endereco);
};
#endif 
