#include <iostream>
#include "imovel.h"

using namespace std;

int Imovel:: nextId = 1;
Imovel::Imovel(TipoImovel tipo, int ProprietarioID, double lat, double lon, const string &endereço, double preço)
    : tipo(tipo), ProprietarioID(ProprietarioID), lat(lat), lon(lon), endereço(endereço), preço(preço){
        id = nextId++;
    }