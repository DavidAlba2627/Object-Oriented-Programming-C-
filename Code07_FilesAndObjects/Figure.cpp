#include "Figure.h"

Figure::Figure(){}
Figure::~Figure(){}

//void FiguraPlana::calcularPerimetro(){} //operador ambito resolucion
// void FiguraPlana::calcularArea(){}

float Figure::getPerimeter() {return m_perimeter;}
float Figure::getArea() {return m_area;}

void Figure::setPerimeter(float perimeter) {m_perimeter = perimeter;}
void Figure::setArea(float area) {m_area = area;}

void Figure::setCoords( vector <Coordinate> coords ) {m_coords = coords;}
vector<Coordinate> Figure::getCoords() {return m_coords;}
