#include "circulo.h"

Circulo::Circulo(float _x0, float _y0, float _raio, float _fillmode)
{
    x0 = _x0;
    y0 = _y0;
    raio = _raio;
    fillmode = _fillmode;
}

void Circulo::draw(Screen &t)
{
    int x, y, d;

    x = 0;
    y = raio;
    d = 1 - raio;
    Circulo::pontosDaCircunferencia(x,y,t);
    while(y > x){
      if(d < 0){
        d = d + 2*x + 3;
        x = x + 1;
      }
      else{
        d = d + 2*(x-y) + 5;
        x = x + 1;
        y = y - 1;
      }
      pontosDaCircunferencia(x,y,t);
    }
}

void Circulo::pontosDaCircunferencia(float x, float y, Screen &t)
{
    t.setPixel(x0 + x, y0 + y);
    t.setPixel(x0 + y, y0 + x);
    t.setPixel(x0 - y, y0 + x);
    t.setPixel(x0 - x, y0 + y);
    t.setPixel(x0 - x, y0 - y);
    t.setPixel(x0 - y, y0 - x);
    t.setPixel(x0 + y, y0 - x);
    t.setPixel(x0 + x, y0 - y);
}
