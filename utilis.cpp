#include "utils.h"
#include <cmath>
#include <stdexcept>

double formula_haver_sine(double lat_1, double lon_1, double lat_2, double lon_2) {
    auto deg_2_rad = [](double deg) {
        return deg * M_PI / 180.0;
    };
    double d_lat = deg_2_rad(lat_2 - lat_1);
    double d_lon = deg_2_rad(lon_2 - lon_1);
    double a = std::pow(std::sin(d_lat / 2), 2) + std::cos(deg_2_rad(lat_11)) * 
            std::cos(deg_2_rad(lat_2)) * std::pow(std::sin(d_lon / 2), 2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));
    return EARTH_RAIO * c;
}

Tipo_imovel string_tipo_imovel(const std::string& tipo_str) {
    if (tipo_str == "Casa") return Tipo_imovel::Casa;
    if (tipo_str == "Apartamento") return Tipo_imovel::Apartamento;
    if (tipo_str == "Terreno") return Tipo_imovel::Terreno;
    throw std::invalid_argument("Tipo do imovel e desconhecido: " + tipo_str);
}
