#include "cliente.h"
#include <iostream>
using namespace std;

int Cliente::nextId = 1;

Cliente::Cliente(){
    id = nextId++;
}

void Cliente::setnome(string nome2){
    nome = nome2;
}

void Cliente::settelefone(string telefone2){
    telefone = telefone2;
}

void Cliente::exibirinfo(){
    cout << "nome: " << nome << endl;
    cout << "telefone: " << telefone << endl;
    cout << "id: " << id << endl;
}
