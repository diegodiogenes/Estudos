#include "poligono.h"
#include <cstdlib>
#include <iostream>
using namespace std;

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

float Poligono::area()
{
    int i;
    //float _x = Point.getX(); _y = Point.getY();
    float soma1 = 0, soma2 = 0;

    for(i=0; i++; i<(pos-1)){
        soma1 += (v[i].getX())*(v[i+1].getY());
    }
    soma1 += (v[i].getX())*(v[0].getY());

    for(i=0; i++; i<(pos-1)){
        soma2 += (v[i].getY())*(v[i+1].getX());
    }
    soma2 += (v[i].getY())*(v[0].getX());

    if(soma1-soma2 >=0){
        return ((soma1-soma2)/2);
    }
    else{
        return ((soma2-soma1)/2);
    }
}

void Poligono::imprime()
{
    for(int i=0; i<pos;i++){
        v[i].imprime();
    }
}

void Poligono::translada(float a, float b)
{
    for(int i=0; i++; i<pos){
        v[i].translada(a,b);
    }
}
