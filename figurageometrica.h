#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"
/**
 * @brief A classe FiguraGeometrica é responsável por representar as classes concretas que estão associadas a ela por meio de herança.
 */
class FiguraGeometrica{
protected:
    float r,g,b,a;
public:

    FiguraGeometrica();
    /**
     * @brief A função ~FiguraGeometrica é um destrutor virtual, que irá se transformar no destrutor do tipo polimórfico ao qual a classe FiguraGeometrica está representando.
     */
    virtual ~FiguraGeometrica(){}
    /**
     * @brief draw é uma função virtual pura que permite que os objetos da classe Sculptor se desenhem.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
