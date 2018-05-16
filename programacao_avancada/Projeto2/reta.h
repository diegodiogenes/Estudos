#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

/**
 * @brief The Reta class desenha uma reta.
 * @details Dentro da matriz que representa a tela, essa classe modifica posições
 * específicas para que, quando colocado em um arquivo ou quando impresso em tela,
 * forneça ao usuário um desenho de uma reta.
 */
class Reta : public FiguraGeometrica
{
    /**
     * @param _x0 é a posição inicial do ponto, no eixo x.
     * @param _y0 é a posição inicial do ponto, no eixo y.
     * @param _x1 é a posição final do ponto, no eixo x.
     * @param _y1 é a posição final do ponto, no eixo y.
     */
    float x0, y0, x1, y1;
public:
    /**
     * @brief Reta é o construtor da classe.
     * @param _x0 é o valor da posição inicial em x do ponto, fornecido pelo usuário.
     * @param _y0 é o valor da posição inicial em y do ponto, fornecido pelo usuário.
     * @param _x1 é o valor da posição final em x do ponto, fornecido pelo usuário.
     * @param _y1 é o valor da posição final em y do ponto, fornecido pelo usuário.
     */
    Reta(float _x0, float _y0, float _x1, float _y1);
    /**
     * @brief draw é a função chave para desenhar a figura.
     * @details Nela, o desenho da reta é feito usando o algoritmo de
     * Bresenham para traçado de traços/retas.
     * @param t é o endereço da matriz que representa a tela onde a reta será
     * desenhada.
     */
    void draw(Screen &t);
};

#endif // RETA_H
