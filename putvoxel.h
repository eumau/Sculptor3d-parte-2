#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief A classe PutVoxel desenha um voxel no ambiente.
 */

class PutVoxel : public FiguraGeometrica{
    int x,y,z;
public:

    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    /**
     * @brief~PutVoxel é o destructor da função <b>PutVoxel</b>.
     * @sa PutVoxel.
     */
    ~PutVoxel(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
