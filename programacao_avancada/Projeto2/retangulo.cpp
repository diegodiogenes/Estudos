#include "retangulo.h"

Retangulo::Retangulo(float _x0, float _y0, float _largura, float _altura, float _fillmode)
{
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    fillmode = _fillmode;
}

void Retangulo::draw(Screen &t)
{
    //Desenha um retângulo totalmente preenchido.
    if(fillmode == 1){
        for(int i = y0; i <= y0+altura; i++){
            for(int j = x0; j <= x0+largura; j++){
                t.setPixel(i,j);
            }
        }
    }

    //Desenha um retângulo não preenchido.
    else if (fillmode == 0){
        for(int i = y0; i <= y0+altura; i++){
            for(int j = x0; j <= x0+largura; j++){
                if((i == y0)||(j == x0)||(i == y0+altura)||(j == x0+largura))
                    t.setPixel(i,j);
            }
        }
    }

    else{ throw "O possíveis valores de fillmode são '0'(retângulo não preenchido) ou '1'(retângulo preenchido)"; }

}
