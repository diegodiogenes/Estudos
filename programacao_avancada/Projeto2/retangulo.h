#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"


class Retangulo : public FiguraGeometrica
{
    float x0, y0, largura, altura;
    bool fillmode;
public:
    Retangulo(float _x0, float _y0, float _largura, float _altura, float _fillmode);

    void draw(Screen &t);
};

#endif // RETANGULO_H
