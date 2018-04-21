#include <iostream>
#include "point.h"
#include "poligono.h"

using namespace std;

int main()
{
    Point p1, p, p2;
    Poligono pol;
    int quantidade;

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

    pol.adicionaVertice(0,2);
    pol.adicionaVertice(2,0);
    pol.adicionaVertice(0,0);

    quantidade = pol.quantidadeVertice();

    cout << quantidade;


    return 0;
}
