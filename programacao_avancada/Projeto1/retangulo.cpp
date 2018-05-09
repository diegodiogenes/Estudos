#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{   
    adicionaVertice(x, y);
    adicionaVertice(x, y-altura);
    adicionaVertice(x+largura,y-altura);
    adicionaVertice(x+largura, y);

}
