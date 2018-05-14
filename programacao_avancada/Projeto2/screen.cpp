#include "screen.h"
#include <iostream>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    if(nlin>=0 && ncol>=0){
        nlin = _nlin;
        ncol = _ncol;
    }
    else{ throw "Nº de linhas ou colunas menores que zero."; }

    matriz = vector<vector<char>>(_nlin, vector<char>(_ncol, ' '));


}

void Screen::setPixel(int x, int y)
{
    matriz[x][y] = brush;
}

void Screen::clear()
{

}

void Screen::setBrush(char brush)
{

}

ostream& operator<<(ostream &os, Screen &t)
{

}
