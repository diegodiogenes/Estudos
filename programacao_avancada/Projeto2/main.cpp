#include <iostream>
#include "point.h"
#include "poligono.h"

using namespace std;

int main()
{
    Point p1, p2, p;
    Poligono pol;
    int quantidade;

    //Subtração entre pontos
    p1.setXY(-5,2);
    cout << "p1:" << endl;
    p1.imprime();

    p.setXY(3,4);
    cout << "p:" << endl;
    p.imprime();

    p2 = p1.sub(p);
    cout << "p2:" << endl;
    p2.imprime();

    //Adição de vértices ao polígono
    pol.adicionaVertice(2,0);
    pol.adicionaVertice(0,2);
    pol.adicionaVertice(0,0);
    //Quantidade de vértices do polígono
    quantidade = pol.quantidadeVertice();

    cout << quantidade << endl;

    //Área do polígono
    cout << pol.area() << endl;

    return 0;
}
