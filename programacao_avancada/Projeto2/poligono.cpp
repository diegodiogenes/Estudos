#include "poligono.h"
#include <cstdlib>

Poligono::Poligono()
{

}

void Poligono::adicionaVertice(float x, float y)
{
    Point p;
    p.setXY(x,y);
    v[pos] = p;
    pos++;
}

int Poligono::quantidadeVertice()
{
    return pos;
}

