#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector <float> split(const string &s, char c); // Function that returns an array of floats

int main()
{
    string line = "34.1,2.0,33.45,1234,9876,3,4,5,6,7,10,1,2,3,4,5,6";
    cout << "String line: " << line << endl << endl;
    vector <float> tokens= split(line,','); // split the string in elements separated by commas
    cout << "The number of items (numbers) in the list is: " << tokens.size() << endl << endl; // Size of the array
    cout << "The items listed are:"<< endl;

    for(int i=0; i<tokens.size(); i++)
        cout << tokens.at(i)<< endl;  // Print number at i position

    return 0;
}

template < typename T>
void splitter(const string  &s, char delim, T result)
{
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        *(result++) = stof(item);
    }
}

vector<float> split(const string &s, char delim)
{
    vector<float> elements;
    splitter(s, delim, back_inserter(elements));
    return elements;
}
