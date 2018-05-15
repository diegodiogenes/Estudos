#include "reta.h"
#include <cmath>

Reta::Reta(float _x0, float _y0, float _x1, float _y1)
{
    x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;
}

void Reta::draw(Screen &t)
{
    int i;

    float tam, x, y, delta_x, delta_y;

    x = x0;
    y = y0;

    if( abs(x1 - x0) > abs(y1 - y0))
         tam = abs(x1 - x0);
    else
         tam = abs(y1 - y0);
    //seleciona o maior dos valores entre Delta_x e Delta_y como unidade de rasterização
    delta_x = (x1 - x0)/tam;
    delta_y = (y1 - y0)/tam;
    i = 1;
    while(i < tam){
    //round: valor arredondado de um dado número real. round(-8.6) = -9; round(-8.4) = -8
      t.setPixel(round(x), round(y));
      x = x + delta_x;
      y = y + delta_y;
      i = i + 1;
    }
}
