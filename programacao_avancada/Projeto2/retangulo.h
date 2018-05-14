#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"


class Retangulo : public FiguraGeometrica
{
public:
    Retangulo(float x0, float y0, float largura, float altura, float fillmode);

    void draw(Screen &t);
};

#endif // RETANGULO_H
