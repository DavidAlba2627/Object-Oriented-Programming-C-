#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <thread>
#include <algorithm>
#include "Particle.h"

using namespace std;

float randGen(const float & min, const float & max);
vector<float> Suma(vector<float> a, vector<float> b);
vector<float> Resta(vector<float> a, vector<float> b);
vector<float> Mult(vector<float> a, vector<float> b);
vector<float> Mult2(vector<float> a, float b);




int main()
{

   ///Inicializando y ordenando el vector de Particles
   char func = 'G';
   ofstream fout("Resultado.txt");
   vector<Particle> Poblacion;
   Particle P;
   int R = 2;
   int I = 50;
   float rang = 10;
   int part = 100;
   for(int i=1;i<=part;i++)
   {
       vector <float> posicion;
       for(int i = 0; i < R; i++)
       {
            posicion.push_back(randGen(-1*rang,rang));
       }

       P = Particle(i, posicion, posicion, posicion);
       Poblacion.push_back(P);
       Poblacion.at(i-1).fitness(func);
   }

   for(int i=0;i<6;i++)
   {
       if(i<3)
            fout << Poblacion.at(i).MostrarDatos(func);
       else
            fout << Poblacion.at(part - 6 + i).MostrarDatos(func);
   }

   fout<<endl<<endl;

   sort(Poblacion.begin(), Poblacion.end());
   for(int i=0;i<6;i++)
   {
       if(i<3)
            fout << Poblacion.at(i).MostrarDatos(func);
       else
            fout << Poblacion.at(part-6 + i).MostrarDatos(func);

   }
   fout<< "\nLa mejor particula es: "<<Poblacion.at(0).getId();


   ///Actualizando velocidad y posicion

   vector<float> U,U2;
   float aux;
   int id;
   float mpg=10;
   for(int j = 0; j<I; j++)
   {

   for(int i=0;i<part;i++)
   {
       Poblacion.at(i).fitness(func);
       aux = Poblacion.at(i).getFitness();
       for(int i = 0; i< R; i++)
       {
            U.push_back(randGen(0.0,1.496186)); //2.05 , 1.496186
            U2.push_back(randGen(0.0,1.496186));
       }
       vector<float> A,B,C,D,Res;

       A = Resta(Poblacion.at(i).getMejorPosLocal(),Poblacion.at(i).getPosicion());
       B = Resta(Poblacion.at(0).getMejorPosLocal(),Poblacion.at(i).getPosicion());
       C = Mult(U,A);
       D = Mult(U2,B);
       Res = Suma(C,D);
       Res = Suma(Res,Poblacion.at(i).getVelocidad());
       Res = Mult2(Res,0.7298);

       Poblacion.at(i).setVelocidad(Res);
       Poblacion.at(i).setPosicion(Suma(Poblacion.at(i).getPosicion(),Poblacion.at(i).getVelocidad()));
       Poblacion.at(i).fitness(func);

       if(aux>Poblacion.at(i).getFitness())
          Poblacion.at(i).setMejorPosLocal(Poblacion.at(i).getPosicion());

       U.clear();
       U2.clear();
   }
   fout<<"\n***************************\n";
   fout<<endl<<endl;


   ///Ordenando e imprimiendo el vector


   sort(Poblacion.begin(),Poblacion.end());
   for(int i=0;i<6;i++)
   {
       if(i<3)
            fout << Poblacion.at(i).MostrarDatos(func);
       else
            fout << Poblacion.at(part-6 + i).MostrarDatos(func);
   }


   ///Actualizando mejor posicion global y mejor id


   if(mpg>Poblacion.at(0).getFitness())
   {
       id = Poblacion.at(0).getId();
       mpg = Poblacion.at(0).getFitness();
   }

   }

   ///Imprimiendo el mejor fitness, id y mejor posicion


   for(int i=0;i<part;i++)
   {
       if(id==Poblacion.at(i).getId())
       {
            cout<<"El mejor fitness es: "<<mpg<<endl
            <<"Obtenido en la partícula: "<<id<<endl
            <<"Las coordenadas son: (";
            for(int j = 0; j < R;j++)
            {
                if(j == R-1)
                    cout<<Poblacion.at(i).getMejorPosLocal().at(j)<<")";

                else
                cout<<Poblacion.at(i).getMejorPosLocal().at(j)<<", ";
            }
       }
   }


   fout.close();

    return 0;
}




float randGen(const float & min, const float & max)
{
    static thread_local mt19937 generator(hash<thread::id>()(this_thread::get_id()));
    uniform_real_distribution<float> distribution(min,max); // normal_distribution
    return distribution(generator);
}

vector<float> Suma(vector<float> a, vector<float> b)
{
    vector<float>S;
    for(int i = 0;i <a.size();i++)
        S.push_back(a.at(i) + b.at(i));

    return S;
}

vector<float> Resta(vector<float> a, vector<float> b)
{
    vector<float>S;
    for(int i = 0;i<a.size();i++)
        S.push_back(a.at(i) - b.at(i));

    return S;
}

vector<float> Mult(vector<float> a, vector<float> b)
{
    vector<float>S;
    for(int i = 0;i<a.size();i++)
        S.push_back(a.at(i) * b.at(i));

    return S;
}

vector<float> Mult2(vector<float> a, float b)
{
    vector<float>S;
    for(int i = 0;i<a.size();i++)
        S.push_back(a.at(i) * b);

    return S;

}
