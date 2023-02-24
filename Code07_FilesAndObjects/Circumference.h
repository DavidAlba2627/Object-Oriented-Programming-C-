#ifndef CIRCUMFERENCE_H
#define CIRCUMFERENCE_H
#include "Figure.h"

class Circumference: public Figure
{
    private:
        float m_radius;

    public:
        Circumference();
        Circumference(vector<Coordinate>coords, float radius);
        ~Circumference();
        void calculatePerimeter();
        void calculateArea();
        void setRadius(float radius);
        float getRadius();

};

#endif // CIRCUMFERENCE_H
