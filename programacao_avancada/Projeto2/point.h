#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class
 */
class Point
{
    float x, y;

public:
    /**
     * @brief Point
     */
    Point();
<<<<<<< HEAD
    Point(float _x, float _y);
=======
    /**
     * @brief setX
     * @param _x
     */
>>>>>>> 6ce26f18debe8d2d64c9aaaf1ff7273e8f992023
    void setX(float _x);
    /**
     * @brief setY
     * @param _y
     */
    void setY(float _y);
    /**
     * @brief setXY
     * @param _x
     * @param _y
     */
    void setXY(float _x, float _y);
    /**
     * @brief getX
     * @return
     */
    float getX(void);
    /**
     * @brief getY
     * @return
     */
    float getY(void);
    /**
     * @brief add
     * @param p1
     * @return
     */
    Point add (Point p1);
    /**
     * @brief sub
     * @param p1
     * @return
     */
    Point sub(Point p1);
    /**
     * @brief norma
     * @return
     */
    float norma();
    /**
     * @brief translada
     * @param a
     * @param b
     */
    void translada(float a, float b);
    /**
     * @brief imprime
     */
    void imprime();
};

#endif // POINT_H
