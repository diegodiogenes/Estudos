#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class permite a criação e
 * manipulação de pontos no plano cartesiano
 * bidimensional.
 */
class Point
{
    float x, y;

public:
    /**
     * @brief Point é o construtor vazio da classe.
     *
     */
    Point();
    /**
     * @brief Point é o construtor não vazio da classe.
     *
     * @param _x é a posição do ponto em relação ao
     * eixo das abscissas.
     *
     * @param _y é a posição do ponto em relação ao
     * eixo das ordenadas.
     *
     */
    Point(float _x, float _y);
    /**
     * @brief setX atribui um valor a x.
     *
     * @details O método permite a atribuição de um
     * valor dado pelo usuário à posição x do ponto.
     *
     * @param _x recebe o valor da abscissa.
     *
     */
    void setX(float _x);
    /**
     * @brief setY atribui um valor a y.
     *
     * @details O método permite a atribuição de um
     * valor dado pelo usuário à posição y do ponto.
     *
     * @param _y recebe o valor da ordenada.
     *
     */
    void setY(float _y);
    /**
     * @brief setXY atribui valores a x e y.
     *
     * @details O método permite a atribuição de um
     * valor dado pelo usuário às posições x e y do
     * ponto, respectivamente.
     *
     * @param _x recebe o valor da abscissa.
     *
     * @param _y recebe o valor da ordenada.
     *
     */
    void setXY(float _x, float _y);
    /**
     * @brief getX captura o valor de x.
     *
     * @details O método permite que o valor da
     * abscissa seja retornado sem que esse seja
     * alterado.
     *
     * @return um float com mesmo valor de x.
     *
     */
    float getX(void);

    /**
     * @brief getX captura o valor de y.
     *
     * @details O método permite que o valor da
     * ordenada seja retornado sem que esse seja
     * alterado.
     *
     * @return um float com mesmo valor de y.
     *
     */
    float getY(void);
    /**
     * @brief add soma pontos.
     * @details O método permite que o ponto
     * pertencente à classe (de coordenadas (x,y)
     * quaisquer) seja somado ao ponto que
     * é recebido como parâmetro (de coordenadas
     * (x1,y1) quaisquer). A soma é feita com
     * cada coordenada por vez, i.e., as abscissas
     * são somadas e, na sequência, as ordenadas.
     *
     * x2 = x + x1;
     * y2 = y + y1;
     *
     * @param p1 é o ponto de coordenadas (x1,y1)
     * que será somado ao ponto (x,y) da classe.
     *
     * @return um ponto de coordenadas (x2,y2),
     * resultado da soma entre os pontos.
     */
    Point add (Point p1);
    /**
     * @brief sub subtrai pontos.
     *
     * @details O método permite subtrair do ponto
     * pertencente à classe (de coordenadas (x,y)
     * quaisquer), um ponto que é recebido como
     * parâmetro (de coordenadas (x1,y1) quaisquer).
     * A subtração é feita com cada coordenada por
     * vez, i.e., as abscissas são subtraidas e,
     * na sequência, as ordenadas.
     *
     * x2 = x - x1;
     * y2 = y - y1;
     *
     * @param p1 é o ponto de coordenadas (x1,y1)
     * que será subtraido do ponto (x,y) da classe.
     *
     * @return um ponto de coordenadas (x2,y2),
     * resultado da soma entre os pontos.
     */
    Point sub(Point p1);
    /**
     * @brief norma calcula a distância entre dois
     * pontos.
     *
     * @details Dado o ponto de coordenadas (x,y),
     * pertencente à classe e o ponto recebido como
     * parâmetro, de coordenadas (x1,y1), podemos
     * calcular sua distância/norma pela seguinte
     * equação:
     * \f$\sqrt{(x-x_1)^2+(y-y_1)^2}\f$
     *
     * @return a distância entre o ponto da classe e
     * o ponto dado como parâmetro.
     */
    float norma();
    /**
     * @brief translada o ponto pertence à classe.
     *
     * @details O método permite que o ponto (x,y)
     * que pertence à classe tenha sua coordenada
     * transladadas de acordo com os valores recebidos
     * nos dois parâmetros. Assim, os valores de x e
     * y são modificados dentro da classe.
     *
     * x = x + a;
     * y = y + b;
     *
     * @param a é o valor que será somado à abscissa.
     *
     * @param b é o valor que será somado à ordenada.
     *
     */
    void translada(float a, float b);
    /**
     * @brief imprime o ponto na tela.
     *
     * @details O ponto será impresso na tela na
     * forma (x,y), ou seja, a coordenada x e a y.
     */
    void imprime();
};

#endif // POINT_H
