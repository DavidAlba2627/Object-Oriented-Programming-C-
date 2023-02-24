#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
#include<vector>

using namespace std;

class Coordinate
{
private:
    float m_x;
    float m_y;

public:
    Coordinate();
    Coordinate(float x,float y);
    ~Coordinate();

    void setx(float x);
    void sety(float y);
    float getx();
    float gety();
    void printCoordinate();

};


#endif // COORDINATE_H
