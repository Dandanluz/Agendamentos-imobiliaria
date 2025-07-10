#ifndef IMOVEL_H
#define IMOVEL_H
#include <iostream>
#include <string>
using namespace std;

enum TipoImovel{Casa, Apartamento, Terreno};

class Imovel{
    public:
    static int nextId;
    int id;
    TipoImovel tipo;
    int ProprietarioID;
    double lat, lon, preço;
    string endereço;

    Imovel(TipoImovel tipo, int ProprietarioID, double lat, double lon, const string &endereço, double preço);
};

#endif