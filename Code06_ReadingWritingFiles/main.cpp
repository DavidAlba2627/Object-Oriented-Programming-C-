#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;

vector <string> split(const string &, char);

int main()
{
    ofstream fout;
    fout.open("myFirstFile.txt");

    fout << "Writing the first line" << endl ;
    fout << "Writing the second line" << endl;
    fout << "Writing a number: " << 1234.567 << endl;
    fout.close();

    fout.open("myFirstFile.txt",fstream::app);
    fout << "Fourth line" << endl;
    fout.close();

    ifstream fin("figures.txt");

    string line;
    int i=0;
    while (getline(fin,line) )
        cout << "Line " << ++i << " : " << line << endl;

    fin.close();

    fin.open("figures.txt");

    vector <string>tokens;
    vector <string>tokens2;
    vector <string>tokens3;

    i=0;
    char buffer1[80];
    char buffer2[80];
    char buffer3[80];
    fin >> buffer1;
    fin >> buffer2;
    fin >> buffer3;
    tokens= split(buffer1,',');
    tokens2= split(buffer2,',');
    tokens3= split(buffer3,',');
    size_t j;
    for(j=0; j<tokens.size(); j++)
    {
        cout << tokens.at(j)<< endl;
    }
    for(j=0; j<tokens2.size(); j++)
    {
        cout << tokens2.at(j)<< endl;
    }
    for(j=0; j<tokens3.size(); j++)
    {
        cout << tokens3.at(j)<< endl;
    }


    fin.close();

    return 0;
}

template < typename Out>
void split(const string  &s, char delim, Out result)
{
    stringstream ss(s); // metodo constructor, ahora string srting (ss) tiene la misma cadena que s
    string item;
    while (getline(ss, item, delim))
    {
        *(result++) = item;
    }
}

vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

