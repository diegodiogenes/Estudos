#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"

class Poligono
{
    Point *v = new Point[100];
    int pos = 0;
public:
    Poligono();
    void  adicionaVertice(float x, float y);
    int   quantidadeVertice();
    float area();
    void  imprime();
    void  translada(float a, float b);
};

#endif // POLIGONO_H
