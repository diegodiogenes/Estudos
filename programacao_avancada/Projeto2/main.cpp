#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Point p1, p2, p;
    Poligono pol;
    Point trans;
    trans.setXY(0,0);

    Retangulo ret(0,0,3,4);

    ret.imprime();

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
    pol.adicionaVertice(0,0);
    pol.adicionaVertice(2,0);
    pol.adicionaVertice(0,2);
    pol.adicionaVertice(2,2);

    //Quantidade de vértices do polígono
    quantidade = pol.quantidadeVertice();
    cout << quantidade << endl;

    //Área do polígono
    cout << pol.area() << endl;

    //Transladar o polígono (INCOMPLETO. O 'FOR' DA FUNÇÃO TRANSLADA NÃO ESTÁ FUNCIONANDO. DEVE SER UM ERRO DE UTILIZAÇÃO DO PTR)
    pol.imprime();

   // pol.translada(20,40);
    cout << "Poligono Transladado" << endl;
    pol.imprime();

    cout << "Area do Poligono Transladado" << endl;
    cout << pol.area() << endl;

    pol.rotaciona(180, trans);

    cout << "Poligono Rotacionado" << endl;
    pol.imprime();

    cout << "Area do poligono rotacionado" << endl;
    cout << pol.area() << endl;

    return 0;
}
