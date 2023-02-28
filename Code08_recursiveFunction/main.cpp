#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>


using namespace std;

float Chevyshev(float x, int n);
float Legendre(float x, int n);

int main()
{

    ofstream archive;
    archive.open("Polynomials.txt");
    archive<<"Value of Chevyshev Polynomials"<<endl<<endl;
    archive<<"x\tTo(x)\t\tT1(x)\t\tT2(x)\t\tT3(x)\t\tT4(x)\t\tT5(x)\t"<<endl;
    float x_rounded;

    for(float x=-1.0;x<=1.1;x = x+0.1)
    {
        x_rounded = round(x * 10) / 10;
        archive<<x_rounded<<"\t";
        for(int n=0;n<=5;n++)
            archive<<setprecision(3)<<Chevyshev(x_rounded,n)<<"\t\t";
        archive<<endl;
    }

    archive<<"\n\nValue of Legendre Polynomials"<<endl<<endl;
    archive<<"x\tPo(x)\t\tP1(x)\t\tP2(x)\t\tP3(x)\t\tP4(x)\t\tP5(x)\t"<<endl;
    for(float x=-1.0;x<=1.1;x = x+0.1)
    {
        x_rounded = round(x * 10) / 10;
        archive<<x_rounded<<"\t";
        for(int n=0;n<=5;n++)
            archive<<setprecision(3)<<Legendre(x_rounded,n)<<"\t\t";
        archive<<endl;
    }

    archive.close();


    return 0;
}

float Chevyshev(float x, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    if(n>1)
        return 2*x*Chevyshev(x,n-1) - Chevyshev(x,n-2);
}


float Legendre(float x, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    if(n>1)
        return ((2*n-1)*x*Legendre(x,n-1) - (n-1)*Legendre(x,n-2))/n;
}
