#include <iostream> // Include cout, cin, endl, cerr
#include <stdio.h>
using namespace std; // Use the standard name space

int main()
{
    int g = 4 ;
    float num1,num2,num3,num4;

    cout << "Program to multiply " << g << " numbers " << endl; // cout is the equivalent of printf

    cout << "Introduce 4 numbers" << endl;

    cin >> num1 >> num2 >> num3 >> num4; // cin is the equivalent of scanf

    cout << "The multiplication of numbers is: " << num1*num2*num3*num4 << endl;
    return 0;
}
