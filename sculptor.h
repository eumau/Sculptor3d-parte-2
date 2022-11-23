#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "voxel.h"
#include <string>
#include <vector>
/**
 * @brief A classe Sculptor é resposnsável por criar e prover funções capazes de manipular uma matriz de Voxels.
 */
class Sculptor{

protected:
    Voxel ***v;

    int nx,ny,nz;
    float r,g,b,a;

public:

    Sculptor(int _nx, int _ny, int _nz);
    /**
     * @brief A função ~Sculptor é o destructor da função <b>Sculptor</b>.
     * @sa Sculptor.
     */
    ~Sculptor();

     void setColor(float r, float g, float b, float alpha);

     void putVoxel(int x, int y, int z);

     void cutVoxel(int x, int y, int z);
     /**
      * @brief Criar arquivo para leitura do desenho, contendo as dimensões e as cores utilizando.
      */
     void writeOFF(char* filename);

     void errorInterval(void);

     int getMatX();

     int getMatY();

     int getMatZ();
};

#endif // SCULPTOR_H
