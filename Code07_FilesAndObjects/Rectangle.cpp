#include "Rectangle.h"

Rectangle::Rectangle(){}
Rectangle::Rectangle(vector<Coordinate> coords)
{
    m_coords = coords;
}
Rectangle::~Rectangle(){}

void Rectangle::calculatePerimeter()
{
    float l1 = sqrt( pow(m_coords.at(0).getx()-m_coords.at(1).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(1).gety(),2));
    float l2 = sqrt( pow(m_coords.at(0).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(2).gety(),2));
    m_perimeter = 2*l1 + 2*l2 ;
    cout << "The perimeter of the rectangle is: "<<m_perimeter<<endl;

}

void Rectangle::calculateArea()
{
    float l1 = sqrt( pow(m_coords.at(0).getx()-m_coords.at(1).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(1).gety(),2));
    float l2 = sqrt( pow(m_coords.at(0).getx()-m_coords.at(2).getx(),2) + pow( m_coords.at(0).gety()-m_coords.at(2).gety(),2));


    m_area = l1 * l2;
     cout << "The area of the rectangle is: "<<m_area<<endl;
}
