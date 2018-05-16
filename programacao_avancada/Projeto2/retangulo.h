#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

/**
 * @brief The Retangulo class desenha um retângulo.
 * @details Dentro da matriz que representa a tela, essa classe modifica posições
 * específicas para que, quando colocado em um arquivo ou quando impresso em tela,
 * forneça ao usuário um desenho de um retângulo.
 */
class Retangulo : public FiguraGeometrica
{
    /**
     * @brief x0 é posição, em x, do vértice esquerdo e superior do retângulo.
     * @brief y0 é posição, em y, do vértice esquerdo e superior do retângulo.
     * @brief largura do retângulo.
     * @brief altura do retângulo.
     */
    float x0, y0, largura, altura;
    /**
     * @brief fillmode define se o retângulo será totalmente preenchido ou se terá
     * apenas um contorno.
     */
    bool fillmode;
public:
    /**
     * @brief Retangulo é o construtor da classe.
     * @param x0 é a posição fornecida pelo usuário, no eixo x, lido de um arquivo
     * de texto.
     * @param y0 é a posição fornecida pelo usuário, no eixo x, lido de um arquivo
     * de texto.
     * @param largura fornecida pelo usuário a partir do arquivo de texto.
     * @param fillmode é o valor (0 ou 1) fornecido pelo usuário para indicar se
     * será desenhado um retângulo totalmente preenchido ou apenas seu contorno.
     */
    Retangulo(float _x0, float _y0, float _largura, float _altura, float _fillmode);
    /**
     * @brief draw é a função chave para desenhar a figura.
     * @details Nela, o desenho do retângulo é feito de forma simples. Para os
     * casos onde devemos preencher totalmente o retângulo, fazemos com que todos
     * os pontos entre a lateral esquerda e a direita fosse preenchido, linha a
     * linha. Para o caso de contorno, as posições que tivessem coordenadas (x0,y)
     * ou (x,y0) fossem modificados,
     * @param t é o endereço da matriz que representa a tela onde o retângulo será
     * desenhado.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
