#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
public:
    Circulo(float x0, float y0, float raio, float fillmode);

    void draw(Screen &t);
};

#endif // CIRCULO_H
