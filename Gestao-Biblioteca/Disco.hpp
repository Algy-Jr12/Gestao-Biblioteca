//
//  Disco.hpp
//  Gestao-Biblioteca
//
//  Created by ALgy Aly, Juicy dos Santos, Regina Massiua, Celeste Ngonhamo on 10/12/19.
//  Copyright © 2019 ALgy Aly. All rights reserved.
//

#ifndef Disco_hpp
#define Disco_hpp

#include "Documento.hpp"
#include "Exemplar.hpp"
#include <stdio.h>

using namespace std;

class Disco:public Documento {
public:
    //Construtor
    Disco(string titulo, string assunto, int cota, string editora, float duracao,string idioma, Exemplar *exemplares[]);
    //Segundo Construtor
    Disco();
    //Destrutor
    //virtual para permitir Documento ser polimórfico
    virtual ~Disco();
    //MARK: Métodos
    //gets
    float getDuracao(); //em minutos
    string getIdioma();
//    Exemplar** getExemplares();
    //sets
    void setDuracao(float);
    void setIdioma(string);
//    void setExemplares(Exemplar*[]);
    //toString
    void toString();
    
protected:
    float duracao;
    string idioma;
    Exemplar* exemplares[10]; //defini directo, porque o Dev++ não estava reconhecer o max Definido na Classe
};

#endif /* Disco_hpp */
