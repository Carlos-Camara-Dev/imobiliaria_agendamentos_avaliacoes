#include "imovel.h"
int Imovel::next_id = 1;

Imovel::Imovel(Tipo_Imovel tipo, int prop_id, double lat, double lon, double preco, 
const std::string& endereco): 
  id(next_id++), tipo(tipo), proprietario_d(prop_id), 
  latitude(lat), longitude(lon), preco(preco), 
  endereco(endereco), visitado(false) {}
