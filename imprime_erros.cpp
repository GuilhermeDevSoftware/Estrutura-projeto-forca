#include "pch.h"
#include <iostream>
#include "imprime_erros.hpp"

void imprime_erros(const std::vector<char> &chutes_errados){
     std::cout << std::endl <<"Chutes errados: ";
    for (char letra : chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}