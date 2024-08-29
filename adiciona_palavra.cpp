#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "salva_arquivo.hpp"
#include "le_arquivo.hpp"
#include "adiciona_palavra.hpp"

void adiciona_palavra(){
    std::cout << "Digite a nova palavra. Utilize letras maiusculas" << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}
