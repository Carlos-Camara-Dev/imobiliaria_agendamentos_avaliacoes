#ifndef UTILS_H
#define UTILS_H
#include <string>

constexpr double EARTH_RAIO = 6371.0;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double formula_haver_sine(double lat1, double lon1, double lat2, double lon2);
enum class Tipo_imovel { Casa, Apartamento, Terreno };

Tipo_imovel string_tipo_Imovel(const std::string& tipo_str);
#endif
