#include "Particle.h"

Particle::Particle(){}
Particle::Particle(int id, vector<float> posicion, vector<float> velocidad,vector<float>mejorPosLocal)
{
    m_id = id;
    copy(posicion.begin(), posicion.end(),back_inserter(m_posicion));
    copy(velocidad.begin(), velocidad.end(),back_inserter(m_velocidad));
    copy(mejorPosLocal.begin(), mejorPosLocal.end(),back_inserter(m_mejorPosLocal));
    m_fitness = 0.0;
}
Particle::~Particle(){}

int Particle::getId(){return m_id;}
vector<float> Particle::getPosicion(){return m_posicion;}
vector<float> Particle::getVelocidad(){return m_velocidad;}
vector<float> Particle::getMejorPosLocal(){return m_mejorPosLocal;}
float Particle::getFitness(){return m_fitness;}

void Particle::setId(int id){m_id = id;}
void Particle::setPosicion(vector<float> posicion){m_posicion.erase(m_posicion.begin(),m_posicion.end());copy(posicion.begin(), posicion.end(),back_inserter(m_posicion));}
void Particle::setVelocidad(vector<float> velocidad){m_velocidad.erase(m_velocidad.begin(),m_velocidad.end()); copy(velocidad.begin(), velocidad.end(),back_inserter(m_velocidad));}
void Particle::setMejorPosLocal(vector<float> mejorPosLocal){m_mejorPosLocal.erase(m_mejorPosLocal.begin(),m_mejorPosLocal.end()); copy(mejorPosLocal.begin(), mejorPosLocal.end(),back_inserter(m_mejorPosLocal));}
void Particle::setFitness(float Fitness){m_fitness = Fitness;}

void Particle::fitness(char a)
{
    if(a == 'S')
    m_fitness = S(m_posicion);
    if(a == 'G')
    m_fitness = G(m_posicion);
    if(a == 'B')
    m_fitness = B(m_posicion);

}

string Particle::MostrarDatos(char a) //concatenando caracteres
{
        fitness(a);
        stringstream ss;
        ss<< "id: " << m_id << " fitness: " << m_fitness << " posicion: ";
        for(size_t i = 0; i<m_posicion.size(); i++)
            ss << m_posicion.at(i) << ", ";
        ss << " mejor posicion: ";
        for(size_t i = 0; i<m_mejorPosLocal.size(); i++)
            ss << m_mejorPosLocal.at(i) << ", ";
        ss << " velocidad: ";
        for(size_t i = 0; i<m_velocidad.size(); i++)
            ss << m_velocidad.at(i) << ", ";
        ss << "\n";
        return ss.str();

}

float S(vector<float> a)
{
    float z = 0;
    for(int i = 0; i<a.size();i++)
        z += a.at(i)*a.at(i);

    return z;
}

float G(vector<float> a)
{
    float x = a.at(0);
    float y = a.at(1);
    float z = (1+pow(x+y+1,2)*(19-14*x+3*x*x-14*y+6*x*y+3*y*y))*(30+pow(2*x-3*y,2)*(18-32*x+12*x*x+48*y-36*x*y+27*y*y));
    return z;
}

float B(vector<float> a)
{
    float x = a.at(0);
    float y = a.at(1);
    float z = pow(1.5-x+x*y,2)+pow(2.25-x+x*y*y,2)+pow(2.625-x+x*y*y*y,2);
    return z;
}
