#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe CutEllipsoid especifica um elipsoide para ser desenhado.
 */
class CutEllipsoid : public FiguraGeometrica{
    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
public:

    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief CutEllipsoid é o destrutor da função <b>CutEllipsoid</b>.
     * @sa CutEllipsoid.
    */
    ~CutEllipsoid(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param s guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
