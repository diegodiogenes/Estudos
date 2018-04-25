#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"
/**
 * @brief The Poligono class permite a criação e manipulação de
 * polígonos.
 *
 * @details O polígono é convexo, possiu 3<=n<=100 vértices e
 * está inteiramente no plano cartesiano bidimensional.
 */
class Poligono
{
    Point *v;
    int pos = 0;
public:
    /**
     * @brief Poligono é o construtor vazio da classe.
     *
     */
    Poligono();
    /**
     * @brief Poligono é o construtor da classe.
     *
     * @details Nele, um espaço para 100 pontos é liberado na
     * memória, número máximo de vértices do polígono e o
     * endereço da memória é guardado em um ponteiro para Point
     * que pertence à classe Poligono.
     *
     * @param qtd Quantidade de vértices do polígono definido
     * pelo usuário.
     *
     */
    Poligono(int qtd);
    ~Poligono();
    /**
     * @brief adicionaVertice Cria novos vértices ao polígono.
     *
     * @details Ao criar novos vértices, o polígono passará a
     * ser outro. A adição de vértices deve ser feita no
     * sentido anti-horário e o polígono sempre deverá ser
     * convexo.
     *
     * @param x Abscissa do ponto do novo vértice.
     *
     * @param y Ordenada do ponto do novo vértice.
     *
     */
    void  adicionaVertice(float x, float y);
    /**
     * @brief quantidadeVertice nos dá a quantidade de vértices
     * no polígono.

     * @return número inteiro de vértices do polígono.
     *
     */
    int   quantidadeVertice();
    /**
     * @brief area O método calcula a área do polígono.
     *
     * @details A área do polígono é calculada a partir dos
     * seus vértices, ou melhor, usando uma relação entre suas
     * distâncias, portanto, não importa a posição do polígono
     * no espaço bidimensional, sua área será sempre a mesma.
     *
     * @return O valor da área do polígono, em u.a.
     *
     */
    float area();
    /**
     * @brief imprime é o método que imprime os vértices do
     * polígono.
     *
     * @details O método "varre" todos os vértices do polígono,
     * um a um, e utiliza a função imprime() já implementada na
     * classe Point para imprimi-los na tela, com a notação
     * (x,y).
     *
     */
    void  imprime();
    /**
     * @brief traslada é o método que translada o polígono
     * no plano cartesiano.
     *
     * @details O método "varre" todos os vértices do polígono,
     * um a um, e utiliza a função translada() já implementada
     * na classe Point para translada-los, modificando os
     * valores dentro da classe, porém, mantendo a estrutura
     * do polígono.
     *
     * @param a é o valor que será somado à abscissa.
     *
     * @param b é o valor que será somado à ordenada.
     *
     */
    void  translada(float a, float b);
    /**
     * @brief rotaciona é o método que rotaciona o polígono
     * no plano cartesiano.
     *
     * @details O método "varre" todos os vértices do polígono,
     * um a um, e utiliza uma matriz de rotação 2x2 para
     * modificar os valores de x e y do vértice, modificando os
     * valores dentro da classe, porém, mantendo a estrutura
     * do polígono.
     *
     * @param teta é o ângulo(em graus) em que o polígono
     * será rotacionado em relação ao ponto de referência.
     *
     * @param a é o ponto de referência ao qual o polígono
     * será rotacionado. Observe que esse ponto não é,
     * necessariamente, a origem ou está dentro do próprio
     * polígono.
     *
     */
    void rotaciona(float teta, Point a);
};

#endif // POLIGONO_H
