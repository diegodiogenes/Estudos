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
     *
     * @details
     *
     */
    Point *v = new Point[100];
    /**
     * @brief pos
     *
     * @details
     *
     */
    int pos = 0;
public:
    /**
     * @brief Poligono
     *
     * @details
     *
     */
    Poligono();
    /**
     * @brief adicionaVertice
     *
     * @details
     *
     * @param x
     *
     * @param y
     *
     */
    void  adicionaVertice(float x, float y);
    /**
     * @brief quantidadeVertice
     *
     * @details
     *
     * @return
     *
     */
    int   quantidadeVertice();
    /**
     * @brief area
     *
     * @details
     *
     * @return
     *
     */
    float area();
    /**
     * @brief imprime
     *
     * @details
     *
     */
    void  imprime();
    /**
     * @brief translada
     *
     * @details
     *
     * @param a
     *
     * @param b
     *
     */
    void  translada(float a, float b);
    /**
     * @brief rotaciona
     *
     * @details
     *
     * @param teta
     *
     * @param a
     *
     */
    void rotaciona(float teta, Point a);
};

#endif // POLIGONO_H
