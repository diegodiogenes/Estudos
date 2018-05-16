#include "screen.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;

    matriz = vector<vector<char>>(_nlin, vector<char>(_ncol, ' '));

}

void Screen::setTamanho(int _nlin, int _ncol)
{
    if(nlin>=0 && ncol>=0){
        nlin = _nlin;
        ncol = _ncol;
    }
    else{ cout << "Numero de linhas ou colunas menores que zero."; }

    matriz = vector<vector<char>>(_nlin, vector<char>(_ncol, ' '));
}

void Screen::setPixel(int x, int y)
{
    matriz[x][y] = brush;
}

void Screen::clear()
{
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            matriz[i][j]=' ';
        }
    }
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i< t.ncol; i++){
        for(int j=0; j< t.nlin; j++){
            os << t.matriz[j][i] << " ";
        }
        os<<endl;
    }
    return os;
}
