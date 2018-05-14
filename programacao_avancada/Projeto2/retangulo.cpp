#include "retangulo.h"

Retangulo::Retangulo(float x0, float y0, float largura, float altura, float fillmode)
{

}

void Retangulo::draw(Screen &t)
{
    if(fillmode == 1){
        for(int i = x0; i <= x0+altura; i++){
            for(int j = y0; j <= y0+largura; j++){
                t.setPixel(i,j);
            }
        }
    }
    else if (fillmode == 0)
        for(int i = x0; i <= x0+altura; i++){
            for(int j = y0; j <= y0+largura; j++){
                if((i == x0)&&)
                    t.setPixel(i,j);
            }
        }
}
