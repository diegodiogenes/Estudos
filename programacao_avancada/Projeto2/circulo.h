#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
    float x0, y0, raio;
    bool fillmode;
public:
    Circulo(float x0, float y0, float raio, float fillmode);

    void draw(Screen &t);

    void pontosDaCircunferencia(float x, float y, Screen &t);
};

#endif // CIRCULO_H
