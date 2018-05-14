#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
public:
    Reta(float p1, float p2);

    void draw(Screen &t);
};

#endif // RETA_H
