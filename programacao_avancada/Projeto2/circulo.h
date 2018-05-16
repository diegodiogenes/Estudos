#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"


/**
 * @brief The Circulo class desenha um círculo.
 * @details Dentro da matriz que representa a tela, essa classe modifica posições
 * específicas para que, quando colocado em um arquivo ou quando impresso em tela,
 * forneça ao usuário um desenho de um disco ou de uma circunferência.
 */
class Circulo : public FiguraGeometrica
{
    /**
     * @brief x0 é a posição do centro no eixo x.
     * @brief y0 é a posição do centro no eixo y.
     * @brief raio é a distância do círulo à borda.
     */
    float x0, y0, raio;
    /**
     * @brief fillmode define se o círculo será totalmente preenchido ou se terá
     * apenas um contorno.
     */
    bool fillmode;
public:

    /**
     * @brief Circulo é o construtor da classe.
     * @param x0 é a posição fornecida pelo usuário, no eixo x, lido de um arquivo
     * de texto.
     * @param y0 é a posição fornecida pelo usuário, no eixo x, lido de um arquivo
     * de texto.
     * @param raio é o raio fornecido pelo usuário a partir do arquivo de texto.
     * @param fillmode é o valor (0 ou 1) fornecido pelo usuário para indicar se
     * será desenhado um disco ou uma circunferência.
     */
    Circulo(float x0, float y0, float raio, float fillmode);

    /**
     * @brief draw é a função chave para desenhar a figura.
     * @details Nela, o desenho da circunferência é feito usando o algoritmo de
     * Bresenham para traçado de circunferências. Para os casos onde devemos
     * preencher totalmente o círculo, fazemos com que todos os pontos que tivessem
     * uma distância ao centro menor ou igual ao raio fossem preenchidos. Em outras
     * palavras, usamos a inequação da circunferência para determinarmos quais
     * pontos são internos ou pertencentes à ela (x^2+y^2 <= raio^2).
     * @param t é o endereço da matriz que representa a tela onde o círculo será
     * desenhado.
     */
    void draw(Screen &t);

    /**
     * @brief pontosDaCircunferencia modifica de fato o valor da matriz nos pontos
     * determinados pelo método draw.
     * @param x representa a coluna que será modificada na matriz.
     * @param y representa a linha que será modificada na matriz.
     * @param t é a tela.
     */
    void pontosDaCircunferencia(float x, float y, Screen &t);
};

#endif // CIRCULO_H
