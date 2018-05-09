#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    //instanciando novos objetos
    Point trans;

    //criando novo objeto de retangulo
    Retangulo ret(0,0,3,4);

    //imprimindo o retangulo
    cout << "Retangulo" << endl;
    ret.imprime();
    //Área do retangulo
    printf("\nÁrea do retângulo : %.1f \n", ret.area());

    cout << "\nRetângulo transladado :" << endl;
    ret.translada(-3,4);
    ret.imprime();

    printf("\nÁrea do retângulo transladado : %.1f \n", ret.area());

    trans.setXY(-3.0/2.0,2.0);

    ret.rotaciona(30,trans);

    cout << "\nRetangulo Rotacionado" << endl;
    ret.imprime();

    printf("\nÁrea do retângulo rotacionado : %.1f \n", ret.area());

    return 0;
}
