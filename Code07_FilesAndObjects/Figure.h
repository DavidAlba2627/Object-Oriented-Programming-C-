#ifndef FIGURE_H
#define FIGURE_H
#include<iostream>
#include<vector>
#include "Coordinate.h"
#include<cmath>

using namespace std;

class Figure
{

protected:
    float m_perimeter;
    float m_area;
    vector<Coordinate> m_coords;

public:

    Figure();
    ~Figure();
    virtual void calculatePerimeter(){}
    virtual void calculateArea(){}

    float getPerimeter();
    float getArea();
    void setPerimeter(float perimeter);
    void setArea(float area);

    vector<Coordinate> getCoords();
    void setCoords(vector<Coordinate>coords);


};

#endif // FIGURE_H
