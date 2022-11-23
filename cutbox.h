#ifndef CUTBOX_H
#define CUTBOX_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe CutBox especifica uma caixa para ser desenhada.
 */
class CutBox : public FiguraGeometrica{
      int x0,y0,z0,x1,y1,z1;
public:
      
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief ~CutBox é o destrutor da função <b>CutBox</b>.
     * @sa CutBox.
     */
    
    ~CutBox(){}

    void draw(Sculptor &s);
};

#endif // CUTBOX_H
