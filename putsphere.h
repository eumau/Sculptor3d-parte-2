#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe PutSphere especifica uma esfera para ser desenhada.
 */
class PutSphere : public FiguraGeometrica{
   int xcenter, ycenter, zcenter, radius;
public:

    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    /**
     * @brief~PutSphere é o destructor da função <b>PutSphere</b>.
     * @sa PutSphere.
     */
    ~PutSphere(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
