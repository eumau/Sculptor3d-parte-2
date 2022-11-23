#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe PutEllipsoid especifica uma elipsoide para ser desenhada.
 */
class PutEllipsoid : public FiguraGeometrica{
        int xcenter, ycenter, zcenter,  rx,  ry, rz;
public:

    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    /**
     * @brief~PutEllipsoid é o destructor da função <b>PutEllipsoid</b>.
     * @sa PutEllipsoid.
     */
    ~PutEllipsoid(){}

    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
