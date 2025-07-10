#include <iostream>
#include <string>
#include <vector>
#include "cliente.h"
#include "corretor.h"
#include "imovel.h"

using namespace std;

TipoImovel stringToTipo(const string &s) {
    if (s == "Casa") return Casa;
    if (s == "Apartamento") return Apartamento;
    if (s == "Terreno") return Terreno;
}
int main()
{
    vector<Corretor> corretores;
    vector<Cliente> clientes;
    vector<Imovel> imoveis;

    int c;
    cout << "Quantos corretores deseja cadastrar?";
    cin >> c;
    for(int i = 0; i = c; i++){
        string linha;
        string telefone; int avaliador; double lat, lon;
        cin >> telefone >> avaliador >> lat >> lon;
        string nome;
        getline(cin >> ws, nome);
        corretores.emplace_back(telefone, avaliador, lat, lon, nome);
    }


    int l;
    cout << "Quantos clientes deseja cadastrar?";
    cin >> l;

    for(int i = 0; i = l; i++){
        string linha;
        string telefone;
        cin >> telefone;
        string nome;
        getline(cin >> ws, nome);
        clientes.emplace_back(telefone, nome);
    }

    int m;
    cout << "Quantos imoveis deseja cadastrar?";
    cin >> m;

    for(int i = 0; i = m; i++){
        string tipo; int propId; double lat, lon, preço;
        cin >> tipo >> propId >> lat >> lon >> preço;
        string endereço;
        getline(cin >> ws, endereço);
        imoveis.emplace_back(tipo, propId, lat, lon, preço, endereço);
    }

    

    return 0;
}