#include "cliente.h"
int Cliente::nextId = 1;

Cliente::Cliente(const std::string& nome, const std::string& telefone): 
  id(next_id++), nome(nome), telefone(telefone) {}
