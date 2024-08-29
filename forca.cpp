#include "pch.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdlib>
#include "nao_acertou.hpp"
#include "letra_existe.hpp"
#include "adiciona_palavra.hpp"
#include "chuta.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavras.hpp"
#include "le_arquivo.hpp"
#include "nao_enforcou.hpp"
#include "salva_arquivo.hpp"
#include "sorteia_palavra.hpp"

using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

int main(){

    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while (nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){
        imprime_erros(chutes_errados);
        
        imprime_palavra(palavra_secreta, chutou);

        chuta(chutes_errados, chutou);
    }

    cout << endl << "Fim de jogo!";
    cout << endl << "A palavra secreta era " << palavra_secreta << ".";

    if(nao_acertou(palavra_secreta, chutou))
        cout << endl << "Voce perdeu! Tente novamente" << endl;   
    else
        cout << endl << "Parabens! Voce acertou a palavra!" <<  endl;
        cout << endl << "Deseja adicionar uma nova palavra no banco? [S] sim -- [N] nao" << endl;

        char resposta;
        cin >> resposta;

        if (resposta == 'S' || resposta == 's'){
            adiciona_palavra();
        }
        cout << endl << "Ate mais!" << endl;

    return 0;
}