#include "Figure.h"
#include "Circumference.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <fstream>
#include <sstream>
#include <string>

vector<string> readFile(string file);
vector<string> tokens(string flow);

int main()
{

    vector<string> lines = readFile("FiguresParameters.txt");
    Figure *Figures[lines.size()];
    float radius;

    for(size_t k=0;k<lines.size();k++)
    {
        vector<string> Tokens = tokens(lines.at(k));
        vector<Coordinate>coords;
        Coordinate coordTemp;
        char figureType = Tokens.at(0).at(0);

        for(size_t i = 1; i< Tokens.size(); i++)
        {
            coordTemp = Coordinate(stof(Tokens.at(i)),stof(Tokens.at(i+1)));
            coords.push_back(coordTemp);
            i++;
            if (figureType == 'C')
                i = Tokens.size();
        }

        switch(figureType)
        {
            case 'T':
                Figures[k]= new Triangle(coords);
            break;

            case 'R':
                Figures[k]= new Rectangle(coords);;
            break;

            case 'C':
                radius = stof(Tokens.at(3));
                Figures[k]= new Circumference(coords,radius);
            break;
        }
            coords.erase(coords.begin(),coords.end());
    }

    for(size_t i = 0;i<lines.size();i++)
    {
         Figures[i]->calculatePerimeter();
         Figures[i]->calculateArea();
         cout<<endl;
    }
    return 0;
}

vector<string> readFile(string file)
{
    ifstream fin(file);
    string line;
    vector <string> fileRead;
    while (getline(fin,line))
    {
        fileRead.push_back(line);
        cout<<line<<endl;
    }
    cout<<endl;
    fin.close();
    return fileRead;
}

vector<string> tokens(string flow)
{
    istringstream StreamTokens(flow);
    string line;
    vector<string> Tokens;
    while(getline(StreamTokens,line,','))
        Tokens.push_back(line);

    return Tokens;
}
