#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1, p, p2;

    //Testando Point sub(Point p1)
    p1.setXY(-5,2);
    cout << "p1:" << endl;
    p1.imprime();

    p.setXY(3,4);
    cout << "p:" << endl;
    p.imprime();

    p2 = p1.sub(p);
    cout << "p2:" << endl;
    p2.imprime();

    return 0;
}
