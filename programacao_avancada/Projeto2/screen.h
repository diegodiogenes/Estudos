#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

/**
 * @brief The Screen class é a classe que define e tem a responsabilidade de
 * configurar a tela de exibição ao usuário.
 * @details Nessa classe, uma matriz que representa a tela é criada, seu tamanho é
 * modificável (setTamanho), o caractere de desenho na tela é modificável(setBrush),
 * o pixel na tela é modificável(setPixel) e temos uma função para apagar toda a
 * tela.
 */
class Screen
{
private:
    /**
     * @brief nlin é o número de linhas da matriz, que representa a altura da tela.
     * @brief ncol é o número de colunas da matriz, que representa a largura da tela.
     */
    int nlin, ncol;

    /**
     * @brief brush é o caractere que será desenhado em cada pixel da tela.
     * @details Inicialmente, essa caractere é o espaço em branco (' ') e o usuário
     * pode modificá-lo depois.
     */
    char brush;
    /**
     * @brief matriz é a representação da tela em forma de vector de vectors.
     * @details O vetor de vetores de char nos permite escrever os caracteres na
     * tela modificando valores específicos dessa matriz.
     */
    vector<vector<char>> matriz;

public:
    /**
     * @brief Screen é o construtor da classe.
     * @param nlin inicialização do número de linhas da matriz tela.
     * @param ncol inicialização do número de colunas da matriz tela.
     */
    Screen(int _nlin, int _ncol);

    /**
     * @brief setTamanho nos permite modificar o tamanho da tela.
     * @details O que acontece de fato é a substituição na matriz antes preparada
     * por outra na memória. Essa nova matriz pode ser menor, maior ou igual a
     * anterior. Aqui, _nlin e _ncol devem ser maiores ou iguais a 0
     * @param _nlin é a altura da tela.
     * @param _ncol é a largura da tela.
     */
    void setTamanho(int _nlin, int _ncol);

    /**
     * @brief setPixel nos permite modificar o conteúdo do pixel.
     * @details Dentro de uma posição específica da matriz, que seria o equivalente a trocar o valor do píxel na
     * tela, esse método desenha um char, definido no 'brush' como caractere
     * de desenho. Quando selecionado um brush, todo o desenho será feito com ele.
     * @param x posição, em x, do pixel que será modificado.
     * @param y posição, em y, do pixel que será modificado.
     */
    void setPixel(int x, int y);

    /**
     * @brief clear tem a função de limpar a tela.
     * @details Todas as posições da matriz recebem o char vazio: ' '
     */
    void clear();

    /**
     * @brief setBrush determina qual será o caractere de desenho na tela.
     * @details Ao selecionar um, todo o desenho será feito com ele, portanto, não
     * será possível desenhar com dois brushs diferentes em um mesmo arquivo.
     * @param brush é um char que recebe o valor do usuário.
     */
    void setBrush(char _brush);

    /**
     * @brief operator << é a sobrecarga do operador <<
     * @details A sobrecarga nos permite mostrar o desenho em tela ou gravar esse
     * desenho em um arquivo.
     * @param os
     * @param t é o endereço da matriz alocada.
     * @return
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
