#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe CutVoxel especifica um Voxel para ser desenhado.
 */
class CutVoxel : public FiguraGeometrica{
    int x,y,z;
public:

    CutVoxel(int x, int y, int z);
    /**
     * @brief CutVoxel é o destrutor da função <b>CutVoxel</b>.
     * @sa CutVoxel.
    */
    ~CutVoxel(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
