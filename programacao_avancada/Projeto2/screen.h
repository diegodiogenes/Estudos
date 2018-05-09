#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

/**
 * @brief The Screen class
 * @details
 */
class Screen
{
private:
    /**
     * @brief nlin
     * @brief ncol
     */
    int nlin, ncol;

    /**
     * @brief brush
     */
    char brush;
    /**
     * @brief matriz
     */
    vector<vector<char>> matriz;

public:
    /**
     * @brief Screen
     * @details
     * @param nlin
     * @param ncol
     */
    Screen(int nlin, int ncol);

    /**
     * @brief setPixel
     * @details
     * @param x
     * @param y
     */
    void setPixel(int x, int y);

    /**
     * @brief clear
     * @details
     */
    void clear();

    /**
     * @brief setBrush
     * @details
     * @param brush
     */
    void setBrush(char brush);

    /**
     * @brief operator <<
     * details
     * @param os
     * @param t
     * @return
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
