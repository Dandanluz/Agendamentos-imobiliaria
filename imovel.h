#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>

class Imovel{
private:
    static int nextId;
    int id;
    int proprietario_id;
    std::string tipo;
    double lat;
    double lgt;
    std::string endereço;
    double preço;

public:
    Imovel();
    void settipo(std::string tipo);
    void setproprietario_id(int prorpietario_id);
    void setlat(double lat2);
    double getlat();
    void setlgt(double lgt2);
    double getlgt();
    void setendereço(std::string endereço);
    void setpreço(double preço);
    int getid();
};

#endif
