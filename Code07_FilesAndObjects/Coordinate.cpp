#include "Coordinate.h"

Coordinate::Coordinate(){}
Coordinate::Coordinate(float x, float y)
{
    m_x = x;
    m_y = y;
}
Coordinate::~Coordinate(){}

void Coordinate::setx(float x) {m_x = x;}
void Coordinate::sety(float y) {m_y = y;}
float Coordinate::getx() {return m_x ;}
float Coordinate::gety() {return m_y ;}
void Coordinate::printCoordinate() {cout << "The coordinate is: "<< m_x<< ","<<m_y<<endl;}
