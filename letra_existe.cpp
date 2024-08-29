#include "pch.h"
#include <string>
#include "letra_existe.hpp"

extern std::string palavra_secreta ;

bool letra_existe (char chute){
    for (char letra : palavra_secreta){ //iterar
        if (chute == letra) return true;
    }
    return false;
}
