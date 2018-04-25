#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"

/**
 * @brief The Retangulo class
 *
 * @details
 */
class Retangulo : public Poligono
{
public:
    /**
     * @brief Retangulo
     *
     * @details
     *
     * @param x
     *
     * @param y
     *
     * @param largura
     *
     * @param altura
     *
     */

    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
