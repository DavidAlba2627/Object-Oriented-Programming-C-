#include <iostream>
#include <climits> // Include INT_MAX, SHRT_MAX, LONG_MAX, INT_MIN, SHRT_MIN, LONG_MIN
#include <cfloat>  // Include DBL_MAX, FLT_MAX, DBL_MIN, FLT_MIN

using namespace std;

int main()
{
    // Print the size of different types of variables
    cout << "Size:" << endl;
    cout << "short is " << sizeof(short) << " bytes" << endl;
    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "long is " << sizeof(long) << " bytes" << endl;
    cout << "float is " << sizeof(float) << " bytes" << endl;
    cout << "double is " << sizeof(double) << " bytes" << endl << endl;

    // Print the minimum value of different types of variables
    cout << "Maximum values:" << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "float: " << FLT_MAX << endl;
    cout << "double: " << DBL_MAX << endl << endl;

    // Print the maximum value of different types of variables
    cout << "Minimum values:" << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "float: " << FLT_MIN << endl;
    cout << "double: " << DBL_MIN << endl << endl;

    return 0;
}
