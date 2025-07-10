#include <iostream>
#include "cliente.h"

using namespace std;

int Cliente:: nextId = 1;
Cliente::Cliente(const std::string &telefone, const std::string &nome)
    : telefone(telefone), nome(nome){
        id = nextId++;
    }