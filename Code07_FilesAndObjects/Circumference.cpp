#include "Circumference.h"
#define PI 3.141592

Circumference::Circumference(){}
Circumference::Circumference(vector<Coordinate> coords, float radius)
{
    m_coords = coords;
    m_radius = radius;
}
Circumference::~Circumference(){}

float Circumference::getRadius() {return m_radius;}

void Circumference::setRadius(float radius) {m_radius = radius;}

void Circumference::calculatePerimeter()
{
    m_perimeter = PI*2*m_radius;
    cout << "The perimeter of the Circumference is: "<<m_perimeter<<endl;
}

void Circumference::calculateArea()
{
    m_area= PI*m_radius*m_radius;
    cout << "The area of the Circumference is: "<<m_area<<endl;
}
