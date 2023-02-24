#include "Triangle.h"

Triangle::Triangle(){}

Triangle::Triangle(vector<Coordinate> coords) {m_coords = coords;}

Triangle::~Triangle(){}

void Triangle::calculatePerimeter()
{
    float l1 = sqrt( pow (m_coords.at(0).getx()-m_coords.at(1).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(1).gety(),2));
    float l2 = sqrt( pow (m_coords.at(0).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(2).gety(),2));
    float l3 = sqrt( pow (m_coords.at(1).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(1).gety()-m_coords.at(2).gety(),2));

    m_perimeter = l1 + l2 + l3;
    cout << "The perimeter of the triangle is: "<<m_perimeter<<endl;

}

void Triangle::calculateArea()
{
    float l1 = sqrt( pow (m_coords.at(0).getx()-m_coords.at(1).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(1).gety(),2));
    float l2 = sqrt( pow (m_coords.at(0).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(2).gety(),2));
    float l3 = sqrt( pow (m_coords.at(1).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(1).gety()-m_coords.at(2).gety(),2));

    float s = (l1 + l2 + l3)/2;

    m_area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
    cout << "The area of the triangle is: "<<m_area<<endl;

}
