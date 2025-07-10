#ifndef CORRETOR_H
#define CORRETOR_H
#include <iostream>
#include <string>

using namespace std;

class Corretor{
    public:
        static int nextId;
        int id;
        std::string nome;
        std::string telefone;
        bool avaliador;
        double lat, lon;

        Corretor(const string &telefone, bool avaliador, double lat, double lon, const string &nome);
    };
#endif