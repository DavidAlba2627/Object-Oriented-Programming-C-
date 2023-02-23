#include <iostream> // Include cout, cin, endl, cerr
#include <cmath> //Include mathematic functions
#include <stdio.h>
using namespace std; // Use the standard name space

int main()
{
    int g = 2;
    long double num1,num2;

    // Print instructions and receive numbers
    cout << "Program to multiply " << g << " numbers " << endl; // cout is the equivalent of printf
    cout << "Introduce 2 numbers" << endl;
    cin >> num1 >> num2; // cin is the equivalent of scanf
    cout << endl << "The multiplication of "<< num1 << "*" << num2 << " is: " << num1*num2 << endl << endl;


    // Math function examples
    cout << "Maximum between " << num1 << " and " << num2 << " is: " << fmax(num1, num2) << endl << endl;
    cout << "Minimum between " << num1 << " and " << num2 << " is: " << fmin(num1, num2) << endl << endl;
    cout << "Base 10 logarithm of "<< num1 << " is: " << log10(num1) << endl << endl;
    cout << "Cosine of " << num1 << " in rad is: " << cos(num1) << endl << endl;
    cout << "Hyperbolic cosine of " << num1 << " is: " << cosh(num1) << endl << endl;
    cout << "Exponential e^"<< num1 << " is: " << exp(num1) << endl << endl;
    return 0;
}
