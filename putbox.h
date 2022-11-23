#ifndef PUTBOX_H
#define PUTBOX_H

#include <figurageometrica.h>
#include "sculptor.h"
/**
 * @brief A classe PutBox especifica uma caixa para ser desenhada.
 */
class PutBox : public FiguraGeometrica{
    int x0,y0,z0,x1,y1,z1;
public:
    /**
     * @brief A função putBox cria uma entidade de Voxels no formato de uma cubo.
     * @brief Esta função utiliza os valores de índice 0 como iniciadores, que vão até os valores de índice 1, em cada uma das coordena
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    /**
     * @brief~PutBox é o destructor da função <b>PutBox</b>.
     * @sa PutBox.
     */
    ~PutBox(){}
    /**
     * @brief draw é a função que permite que o objeto da classe se desenhe.
     * @param t guarda o endereço do objeto que irá se desenhar.
     */
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
