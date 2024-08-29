#include "pch.h"
#include <vector>
#include <map>
#include <iostream>
#include "letra_existe.hpp"
#include "chuta.hpp"


void chuta(std::vector<char> &chutes_errados, std::map<char, bool> &chutou){
    char chute;
    std::cout << std::endl <<"Chute: " << std::endl;
    std::cin >> chute;
    chutou[chute] = true;

    if(letra_existe(chute))
        std::cout << "Voce acertou! Essa letra esta na palavra" << std::endl;
    
    else{
        std::cout << "Voce errou! Essa letra nao esta na palavra" << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}