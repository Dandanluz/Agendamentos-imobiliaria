#include <iostream>
#include "corretor.h"

using namespace std;

int Corretor:: nextId = 1;
Corretor::Corretor(const string &telefone, bool avaliador, double lat, double lon, const string &nome)
    : telefone(telefone), avaliador(avaliador), lat(lat), lon(lon), nome(nome){
        id = nextId++;
    }