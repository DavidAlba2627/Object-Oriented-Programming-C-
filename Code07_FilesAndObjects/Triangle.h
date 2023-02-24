#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figure.h"

class Triangle: public Figure
{
public:
    Triangle();
    Triangle(vector <Coordinate> coords);
    ~Triangle();
    void calculateArea();
    void calculatePerimeter();
};

#endif // TRIANGLE_H
