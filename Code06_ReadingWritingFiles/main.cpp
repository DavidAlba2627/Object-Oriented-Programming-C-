#include <iostream>
#include <cstring>
#include <fstream> // file input and output, flujos hacia archivos
#include <sstream>
#include <vector>


using namespace std;

vector <string> split(const string &, char);

int main()
{
    ofstream fout; // fout("miPrimerArchivo.txt
    fout.open("myFirstFile.txt");

    fout << "Writing the first line" << endl ;
    fout << "Writing the second line" << endl;
    fout << "Writing a number: " << 1234.567 << endl;
    fout.close();

    fout.open("myFirstFile.txt"); // despues de la coma es el modificador del archivo, tambien puede ser  ios_base
    fout << "Quinta linea!" << endl;
    fout << "Sexta linea!" << endl;
    fout.close();

    ifstream fin("figurasPlanas.txt");
    /*char ch1, ch2;
    fin >> ch1;
    fin >> ch2;
    char buffer[80]; // tinaco de la casa
    fin >> buffer;

    cout << "Los 2 primeros caracteres son: " << ch1 << " y " << ch2 <<endl;
    cout << "Los caracteres del buffer son: "<< buffer << endl;*/

    string line;
    int i=0;
    while (getline(fin,line) )// getline es getline(de donde vas a a leer el string, donde quieres almacenar el resultado)
        cout << "Linea " << ++i << " : " << line << endl;

    fin.close();

    fin.open("figurasPlanas.txt");

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
    size_t j; // hace alusion a un tipo de  dato primitivo, version mas general del int
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
    split(s, delim, back_inserter(elems)); // back convierte algo a un apuntador
    return elems;
}

