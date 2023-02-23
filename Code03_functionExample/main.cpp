#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

// Functions to calculate Perimeter and Area of different geometric figures
void evaluateCircumference(float);
void evaluatePolygon(int, float);

int main()
{
    int n, num;
    float len, radius;
    bool control = true;

    do
    {
        cout << "Enter the number of figure you want to calculate Perimeter and Area \n 1. Regular Polygon\n 2. Circumference\n 3. Exit \n" << endl;
        cin >> n;
        system ("CLS"); // Clear window
        switch(n)
        {
            case 1:
                cout << "Enter the number of sides" << endl;
                cin >> num;
                system ("CLS");
                cout << "Enter the length of one side" << endl;
                cin >> len;
                system ("CLS");
                evaluatePolygon(num, len);
                break;

            case 2:
                cout << "Enter the value of the radius" << endl;
                cin >> radius;
                system ("CLS");
                evaluateCircumference(radius);
                break;

            case 3:
                control = false;
                break;
        }

    }
    while(control);
    return 0;
}


void evaluateCircumference(float r)
{
    cout << "Circumference of radius "  << r << endl << endl;
    cout << "The perimeter is: " << PI*2*r  << endl;
    cout << "The area is: "<< PI*r*r << endl << endl;
}

void evaluatePolygon(int num, float len)
{
    float alpha, apothem;
    alpha = PI/num;
    apothem = len/(2*tan(alpha));

    cout << num << "-sided polygon with length "  << len << endl << endl;
    cout << "The perimeter is: " << num*len << endl;
    cout << "The area is: "<< num*len*apothem/2 << endl << endl;
}
