#include "screen.h"

Screen::Screen(int nlin, int ncol)
{
    if(nlin>=0 && ncol>=0){
        nlin = _nlin;
        ncol = _ncol;
    }
    else
        throw "Nº de linhas ou colunas menores que zero.";
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

ostream &Screen::operator<<(ostream &os, Screen &t)
{

}
