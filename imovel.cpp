#include "imovel.h"
#include <iostream>
using namespace std;

int Imovel::nextId = 1;

Imovel::Imovel(){
    id = nextId++;
}

void Imovel::settipo(string tipo){
    this->tipo = tipo;
}

void Imovel::setproprietario_id(int proprietario_id){
    this->proprietario_id = proprietario_id;
}

void Imovel::setlat(double lat2){
    lat = lat2;
}

double Imovel::getlat(){
    return lat;
}

void Imovel::setlgt(double lgt2){
    lgt = lgt2;
}

double Imovel::getlgt(){
    return lgt;
}

void Imovel::setendereço(string endereço){
    this->endereço = endereço;
}

void Imovel::setpreço(double preço){
    this->preço = preço;
}

int Imovel::getid(){
    return id;
}

void Imovel::exibirinfo(){
    cout << "tipo: " << tipo << endl;
    cout << "proprietario_id: " << proprietario_id << endl;
    cout << "lat: " << lat << endl;
    cout << "lgt: " << lgt << endl;
    cout << "endereço: " << endereço << endl;
    cout << "preço: " << preço << endl;
    cout << "id: " << id << endl;
}
