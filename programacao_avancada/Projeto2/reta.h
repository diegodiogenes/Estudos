#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
    float x0, y0, x1, y1;
public:
    Reta(float _x0, float _y0, float _x1, float _y1);

    void draw(Screen &t);
};

#endif // RETA_H
