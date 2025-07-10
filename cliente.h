#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include <string>

using namespace std;

class Cliente{
    public:
        static int nextId;
        int id;
        std::string nome;
        std::string telefone;

        Cliente(const std::string &telefone, const std::string &nome);
};

#endif