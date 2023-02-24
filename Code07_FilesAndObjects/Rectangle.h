#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"

class Rectangle: public Figure
{
    public:
        Rectangle();
        Rectangle(vector<Coordinate> coords);
        ~Rectangle();

        void calculateArea();
        void calculatePerimeter();
};

#endif // RECTANGLE_H
