#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe CutSphere especifica uma esfera para ser desenhada.
 */
class CutSphere : public FiguraGeometrica{
     int xcenter, ycenter, zcenter, radius;
public:
 
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief CutSphere é o destrutor da função <b>CutSphere</b>.
     * @sa CutSphere.
    */
    ~CutSphere(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
