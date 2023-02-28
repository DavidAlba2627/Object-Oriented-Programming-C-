#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>


using namespace std;
float S(vector<float> a);
float G(vector<float> a);
float B(vector<float> a);


class Particle
{

private:
    int m_id;
    vector<float> m_posicion;
    vector<float> m_velocidad;
    vector<float> m_mejorPosLocal;
    float m_fitness;



public:
    Particle();
    Particle(int id, vector<float> posicion, vector<float> velocidad,vector<float>mejorPosLocal);
    ~Particle();

    void setId(int id);
    void setPosicion(vector<float> posicion);
    void setVelocidad(vector<float> velocidad);
    void setMejorPosLocal(vector<float> mejorPosLocal);
    void setFitness(float Fitness);

    int getId();
    vector<float>getPosicion();
    vector<float>getVelocidad();
    vector<float>getMejorPosLocal();
    float getFitness();

    void fitness(char a);
    string MostrarDatos(char a);

    bool operator < (const Particle &Particle2)
    const { return m_fitness < Particle2.m_fitness;}

};
#endif // PARTICLE_H



