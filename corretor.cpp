#include "corretor.h"
int Corretor::next_id = 1;

Corretor::Corretor(const std::string& nome, const std::string& telefone, 
bool avaliador, double lat, double lon): 
  id(next_id++), nome(nome), telefone(telefone), avaliador(avaliador), latitude(lat), longitude(lon) {}
