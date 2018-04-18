#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point()
{

}

void Point::setX(float _x)
{
    x = _x;
}

void Point::setY(float _y)
{
    y = _y;
}

void Point::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point p;
    p.x = x+p1.x;
    p.y = y+p1.y;

    return p;
}

Point Point::sub(Point p1)
{
    Point p;
    p.x = x-p1.x;
    p.y = y-p1.y;

    return p;
}

float Point::norma()
{
    return sqrt(x*x+y*y);
}

void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Point::imprime()
{
    cout << "(" << x << "," << y << ")" << endl;
}


