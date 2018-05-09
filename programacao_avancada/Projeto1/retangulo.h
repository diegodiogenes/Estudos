#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"

/**
 * @brief The Retangulo  é uma herdeira da classe Poligono
 *
 * @details Como herdeira, ela tem todas as características de
 * um polígono como o definido na classe herdade: convexo,
 * número de vértices 3<=n<=100 e inteiramente dentro do
 * plano cartesiano bidimensional.
 */
class Retangulo : public Poligono
{
public:
    /**
     * @brief Retangulo é o construtor da classe.
     *
     * @details Nele, temos a coordenada do canto inferior
     * esquerdo do retângulo, sua largura e altura. Com isso,
     * temos todas as informações necessárias para definir
     * completamente um retângulo dentro no plano xy.
     *
     * @param x é a abscissa do vértice inferior esquerda do
     * retângulo.
     *
     * @param y é a ordenada do vértice inferior esquerda do
     * retângulo.
     *
     * @param largura é a largura do retângulo, em u.c.
     *
     * @param altura é a altura do retângulo, em u.c.
     *
     */

    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
