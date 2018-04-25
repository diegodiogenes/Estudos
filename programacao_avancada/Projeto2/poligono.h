#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"
/**
 * @brief The Poligono class
 */
class Poligono
{
    /**
     * @brief v
     */
    Point *v;
    /**
     * @brief pos
     */
    int pos = 0;
public:
    /**
     * @brief Poligono
     */
    Poligono();
    Poligono(int qtd);
    ~Poligono();
    /**
     * @brief adicionaVertice
     * @param x
     * @param y
     */
    void  adicionaVertice(float x, float y);
    /**
     * @brief quantidadeVertice
     * @return
     */
    int   quantidadeVertice();
    /**
     * @brief area
     * @return
     */
    float area();
    /**
     * @brief imprime
     */
    void  imprime();
    /**
     * @brief translada
     * @param a
     * @param b
     */
    void  translada(float a, float b);
    /**
     * @brief rotaciona
     * @param teta
     * @param a
     */
    void rotaciona(float teta, Point a);
};

#endif // POLIGONO_H
